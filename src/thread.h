#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include "algorithm.h"
#include "datareaders.h"

class Thread: public QThread
{
public:
    Thread():_algorithm(NULL),_dataReader(NULL){}
    Thread(Algorithm* alg):_algorithm(alg),_dataReader(NULL){}
    Thread(Algorithm* alg, DataReader* dataR):_algorithm(alg),_dataReader(dataR){}
    ~Thread(){delete _algorithm; delete _dataReader;}

    void run();
protected:
    Algorithm* _algorithm;
    DataReader* _dataReader;
};

#endif // THREAD_H
