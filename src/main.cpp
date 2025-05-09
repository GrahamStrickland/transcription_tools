#include <QApplication>
#include <QFileSystemModel>
#include <QListView>
#include <QSplitter>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  QSplitter *splitter = new QSplitter;

  QFileSystemModel *model = new QFileSystemModel;
  model->setNameFilters(QStringList{".aiff", ".wav", ".mp3"});
  model->setNameFilterDisables(true);
  model->setRootPath(QDir::currentPath());

  QListView *list = new QListView(splitter);
  list->setModel(model);
  list->setRootIndex(model->index(QDir::currentPath()));

  splitter->setWindowTitle("Select Audio File");
  splitter->show();

  return app.exec();
}
