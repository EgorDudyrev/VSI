#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <QThread>
#include <QVector>
#include <string>

//template<class data_type> //Для сортировок - data_type=double, для нахождения пути = map_cell
class Algorithm: public QObject
{
   Q_OBJECT
public:
    Algorithm();
    Algorithm(const Algorithm & alg);
    virtual ~Algorithm();

//    virtual QVector<data_type> calculate(QVector<data_type> vect)=0; //Функция выполнения алгоритма
    virtual QVector<double> calculate(QVector<double>& vect)=0; //Функция выполнения алгоритма sleepTime пропорциональна скорости выполнения
signals:
    void NumberChanged();
protected:
};

#endif // ALGORITHM_H
