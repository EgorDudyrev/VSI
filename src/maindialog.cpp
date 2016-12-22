#include "maindialog.h"
#include "choosesortdialog.h"
#include "ui_maindialog.h"



MainDialog::MainDialog(QWidget *parent) :
    Dialog(parent,NULL,NULL),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);
}

MainDialog::~MainDialog()
{
    delete ui;
}

void MainDialog::on_btnSorting_clicked()
{
    ChooseSortDialog* d = new ChooseSortDialog();
    d->show();
}
