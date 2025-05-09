#include <QApplication>

#include "../include/filedialog.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  FileDialog *dialog = new FileDialog;
  dialog->show();

  return app.exec();
}
