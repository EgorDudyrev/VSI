#ifndef SORTINGS_H
#define SORTINGS_H

#include "algorithm.h"

class Sorting: Algorithm
{
public:
    Sorting(){}
    Sorting(const Sorting& sort){}
    ~Sorting(){}

    virtual QVector<double> calculate(QVector<double> vect)=0;
private:

};

class HeapSort: Sorting
{
public:
    HeapSort():Sorting(){}
    HeapSort(const HeapSort& sort):Sorting(sort){}
    ~HeapSort(){}

    virtual QVector<double> calculate(QVector<double> vect);
protected:
};

class ShellSort: Sorting
{
public:
    ShellSort():Sorting(){}
    ShellSort(const ShellSort& sort):Sorting(sort){}
    ~ShellSort(){}

    virtual QVector<double> calculate(QVector<double> vect);
protected:
};

class QuickSort: Sorting
{
public:
    QuickSort():Sorting(){}
    QuickSort(const QuickSort& sort):Sorting(sort){}
    ~QuickSort(){}

    virtual QVector<double> calculate(QVector<double> vect);
protected:
};

#endif // SORTINGS_H
