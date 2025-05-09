#include <QFileSystemModel>
#include <QListView>
#include <QSplitter>

#include "../include/filedialog.h"

FileDialog::FileDialog(QWidget *parent) : QDialog(parent) {
  m_splitter = new QSplitter;

  QFileSystemModel *model = new QFileSystemModel;
  model->setNameFilters(QStringList{".aiff", ".wav", ".mp3"});
  model->setNameFilterDisables(true);
  model->setRootPath(QDir::currentPath());

  QListView *list = new QListView(m_splitter);
  list->setModel(model);
  list->setRootIndex(model->index(QDir::currentPath()));

  m_splitter->setWindowTitle("Select Audio File");
  m_splitter->show();
}
