#include "choosesortdialog.h"
#include "sortingdialog.h"
#include "sortings.h"
#include "ui_choosesortdialog.h"

ChooseSortDialog::ChooseSortDialog(QWidget *parent) :
    Dialog(parent,NULL,NULL),
    ui(new Ui::ChooseSortDialog)
{
    ui->setupUi(this);
}

ChooseSortDialog::~ChooseSortDialog()
{
    delete ui;
}

void ChooseSortDialog::on_btnGoSort_clicked()
{
    Algorithm* alg = NULL;
    Thread* th = NULL;
    if(ui->radioButtonHeapSort->isChecked())
    {
        alg = (Algorithm*) new HeapSort;
        th = new Thread(alg);
        SortingDialog* d = new SortingDialog(th);
        d->show();
    }
    else if(ui->radioButtonShellSort->isChecked())
    {
        alg = (Algorithm*)new ShellSort();
        th = new Thread(alg);
        SortingDialog* d = new SortingDialog(th);
        d->show();
    }
    else if(ui->radioButtonQuickSort->isChecked())
    {
        alg = (Algorithm*)new QuickSort();
        th = new Thread(alg);
        SortingDialog* d = new SortingDialog(th);
        d->show();
    }
    else
        return;
}
