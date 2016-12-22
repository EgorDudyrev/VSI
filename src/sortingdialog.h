#ifndef SORTINGDIALOG_H
#define SORTINGDIALOG_H

#include "dialog.h"

namespace Ui {
class SortingDialog;
}

class SortingDialog : public Dialog
{
    Q_OBJECT

public:
    explicit SortingDialog(Thread* th, DataOut* data = 0, QWidget *parent = 0);
    ~SortingDialog();
    bool flagDraw = false;

protected:
    void paintEvent(QPaintEvent* e);

public slots:
    void onNumberChanged();

private:
    Ui::SortingDialog *ui;
};

#endif // SORTINGDIALOG_H
