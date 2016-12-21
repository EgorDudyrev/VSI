#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent, Thread* th, DataOut* data) :
    QDialog(parent),
    thread(th),
    dataOut(data),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete thread;
    delete dataOut;
    delete ui;
}
