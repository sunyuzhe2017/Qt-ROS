#include "../include/test2/manualdialog.h"
#include "ui_manualdialog.h"

ManualDialog::ManualDialog(QWidget *parent):
  QDialog(parent),
  ui(new Ui::ManualDialog)
{
  ui->setupUi(this);
}

ManualDialog::~ManualDialog()
{
  delete ui;
}

void ManualDialog::on_pButton_back_clicked()
{
    accept ();
}
