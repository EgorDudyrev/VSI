#include "dataout.h"
#include <QDialog>
#include <QtGui>
#include <QtCore>
#include <QVector>

DataOut::DataOut()
{
}
DataOut::DataOut(const DataOut& data)
{
}
DataOut::~DataOut()
{
}

SortDataOut::SortDataOut()
    :DataOut()
{
}
SortDataOut::SortDataOut(const SortDataOut& data):
    DataOut(data)
{
}
SortDataOut::~SortDataOut()
{
}

void SortDataOut::display(QVector<outVectEl> vec, QDialog* dial)
{
    QPainter painter(dial);
    QPen pen,pen2;


    QPoint p1;
    QPoint p2;

    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    int count = 2;

    painter.setBrush(brush);

    //for(int i = 0; i < vec.size(); i++)
    for(int i = 0; i < 10; i++)
    {
        //if(i == th->ind1 || i == th->ind2)
        {
            brush.setColor(Qt :: green);
            brush.setStyle(Qt :: SolidPattern);
            painter.setBrush(brush);
           // pen.setColor("#ffa800");
           // painter.setPen(pen);
        }
        /*else
        {
            brush.setColor(Qt::lightGray);
            painter.setBrush(brush);
           // pen.setColor("#792500");
           // painter.setPen(pen);
        }*/
       //painter.drawRect(count*120+i*4,500-vec[i]*10, 4, vec[i]*10);//todo: заменить цифры на константы
        painter.drawRect(count*120+i*4,500-i*10, 4, i*10);//todo: заменить цифры на константы

       // painter.drawLine(i,500-th->arr[i]*8, i, 500  );

    }
}

FPTDataOut::FPTDataOut():
    DataOut()
{
}
FPTDataOut::FPTDataOut(const FPTDataOut& data):
    DataOut(data)
{
}
FPTDataOut::~FPTDataOut()
{
}

void FPTDataOut::display(QVector<outVectEl> vec, QDialog* dial)
{
}
