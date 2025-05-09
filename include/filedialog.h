#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
class QSplitter;
QT_END_NAMESPACE

class FileDialog : public QDialog {
  Q_OBJECT
public:
  explicit FileDialog(QWidget *parent = nullptr);

private:
  QSplitter *m_splitter;
};
#endif // FILEDIALOG_H
