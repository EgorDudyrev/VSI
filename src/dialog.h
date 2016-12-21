#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "thread.h"
#include "dataout.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0, Thread* th = 0, DataOut* data = 0);
    ~Dialog();


private:
    Ui::Dialog *ui;
    Thread* thread;
    DataOut* dataOut;
};

#endif // DIALOG_H
