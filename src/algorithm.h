#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <QVector>
#include <string>

//template<class data_type> //Для сортировок - data_type=double, для нахождения пути = map_cell
class Algorithm
{
public:
    Algorithm(){}
    Algorithm(const Algorithm & alg){}
    ~Algorithm(){}

//    virtual QVector<data_type> calculate(QVector<data_type> vect)=0; //Функция выполнения алгоритма
    virtual QVector<double> calculate(QVector<double> vect)=0; //Функция выполнения алгоритма

private:
};

#endif // ALGORITHM_H
