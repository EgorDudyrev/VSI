#ifndef SORTINGS_H
#define SORTINGS_H

#include "algorithm.h"

class Sorting: public Algorithm
{
    //Q_OBJECT
public:
    Sorting():Algorithm(),SwapNum(0){}
    Sorting(const Sorting& sort):Algorithm(sort),SwapNum(0){}
    virtual ~Sorting(){}

    virtual QVector<double> calculate(QVector<double>& vect)=0;

    int getSwapNum(){return SwapNum;}

    template<class T>                           //Было объявлено в коде Яна
    void Swap(T& a, T& b);                        //Но применения я не нашёл
    //template<class T>                         //Эта функция применялась в коде Яна
    //void Swap(T& a, T& b, int i1, int i2);    //Но я так и не понял, зачем нужны i1, i2
private:
    int SwapNum; //Кол-во перестановок
};

class HeapSort: public Sorting
{
    //Q_OBJECT
public:
    HeapSort();
    HeapSort(const HeapSort& sort);
    virtual ~HeapSort();

    virtual QVector<double> calculate(QVector<double>& vect);
protected:
    void heapify(QVector<double>& arr, int n, int i);
    void heapSort(QVector<double>& arr, int n);
};

class ShellSort: public Sorting
{
public:
    ShellSort():Sorting(){}
    ShellSort(const ShellSort& sort):Sorting(sort){}
    virtual ~ShellSort(){}

    virtual QVector<double> calculate(QVector<double>& vect);
protected:
};

class QuickSort: public Sorting
{
public:
    QuickSort():Sorting(){}
    QuickSort(const QuickSort& sort):Sorting(sort){}
    virtual ~QuickSort(){}

    virtual QVector<double> calculate(QVector<double>& vect);
protected:
};

#endif // SORTINGS_H
