#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include "dialog.h"

namespace Ui {
class MainDialog;
}

class MainDialog : public Dialog
{
    Q_OBJECT

public:
    explicit MainDialog(QWidget *parent = 0);
    ~MainDialog();

private slots:

    void on_btnSorting_clicked();

private:
    Ui::MainDialog *ui;
};

#endif // MAINDIALOG_H
