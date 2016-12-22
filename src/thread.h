#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include "algorithm.h"
#include "datareaders.h"

class Thread: public QThread
{
   Q_OBJECT
public:
    explicit Thread(QObject* parent = 0);
    explicit Thread(Algorithm* alg, QObject* parent = 0);
    explicit Thread(Algorithm* alg, DataReader* dataR, QObject* parent = 0);
    ~Thread(){delete _algorithm; delete _dataReader;}

    void run();

    unsigned long getSleepTime(){return SleepTime;}

    QVector<double> getData(){return Data;}

    Algorithm*& getAlgorithm(){return _algorithm;}
    DataReader*& getDataReader(){return _dataReader;}
protected:
    Algorithm* _algorithm;
    DataReader* _dataReader;

    unsigned long SleepTime;
    QVector<double> Data;
public slots:
    void onNumberChanged();

};

#endif // THREAD_H
