#ifndef CHOOSESORTDIALOG_H
#define CHOOSESORTDIALOG_H

#include "dialog.h"

namespace Ui {
class ChooseSortDialog;
}

class ChooseSortDialog : public Dialog
{
    Q_OBJECT

public:
    explicit ChooseSortDialog(QWidget *parent = 0);
    ~ChooseSortDialog();

private slots:
    void on_btnGoSort_clicked();

private:
    Ui::ChooseSortDialog *ui;
};

#endif // CHOOSESORTDIALOG_H
