#include "sortingdialog.h"
#include "ui_sortingdialog.h"
#include "sortings.h"

SortingDialog::SortingDialog(Thread* th, DataOut* data, QWidget *parent) :
    Dialog(parent, th, data),
    ui(new Ui::SortingDialog),
    flagDraw(false)
{
    ui->setupUi(this);
    connect(thread->getAlgorithm(), SIGNAL(NumberChanged()), this, SLOT(onNumberChanged()));

    thread->start();
}

SortingDialog::~SortingDialog()
{
    delete ui;
}

void SortingDialog::paintEvent(QPaintEvent* e)
 {
     if(flagDraw)
     {
         dataOut->display(thread->getData(), this);

         ui->labelSwaps->setText("Swaps:  " + QString :: number(((Sorting*)(thread->getAlgorithm()))->getSwapNum()));
         flagDraw = false;
     }
}

void SortingDialog::onNumberChanged()
{
    flagDraw = true;
    update();
}
