#ifndef DATAOUT_H
#define DATAOUT_H

#include <QVector>
#include <QDialog>

typedef double outVectEl; //Тип элементов векторов

class DataOut
{
public:
    DataOut();
    DataOut(const DataOut& data);
    ~DataOut();

    virtual void display(QVector<outVectEl> vec, QDialog* dial)=0;//vec - что выводится, dial - куда выводится
protected:
};

class SortDataOut: public DataOut
{
public:
    SortDataOut();
    SortDataOut(const SortDataOut& data);
    ~SortDataOut();

    virtual void display(QVector<outVectEl> vec, QDialog* dial);
protected:
};

class FPTDataOut: public DataOut
{
public:
    FPTDataOut();
    FPTDataOut(const FPTDataOut& data);
    ~FPTDataOut();

    virtual void display(QVector<outVectEl> vec, QDialog* dial);
protected:
};

#endif // DATAOUT_H
