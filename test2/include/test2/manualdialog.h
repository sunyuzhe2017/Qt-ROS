#ifndef MANUALDIALOG_H
#define MANUALDIALOG_H

#include <QDialog>

namespace Ui {
  class ManualDialog;
}
class ManualDialog : public QDialog
{
  Q_OBJECT

public:
  explicit ManualDialog(QWidget *parent = 0);
  ~ManualDialog();

private Q_SLOTS:
  void on_pButton_back_clicked();//back to the  main window,auto connect slot

private:
  Ui::ManualDialog *ui;
};
#endif // MANUALDIALOG_H
