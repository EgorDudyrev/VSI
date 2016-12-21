#ifndef DATAOUT_H
#define DATAOUT_H

#include <QVector>

typedef double outVectEl; //Тип элементов векторов

class DataOut
{
public:
    DataOut(){}
    DataOut(const DataOut& data){}
    ~DataOut(){}

    virtual void display(QVector<outVectEl> vec)=0;
protected:
};

class SortDataOut: public DataOut
{
public:
    SortDataOut():DataOut(){}
    SortDataOut(const SortDataOut& data):DataOut(data){}
    ~SortDataOut(){}

    virtual void display(QVector<outVectEl> vec);
protected:
};

class FPTDataOut: public DataOut
{
public:
    FPTDataOut():DataOut(){}
    FPTDataOut(const FPTDataOut& data):DataOut(data){}
    ~FPTDataOut(){}

    virtual void display(QVector<outVectEl> vec);
protected:
};

#endif // DATAOUT_H
