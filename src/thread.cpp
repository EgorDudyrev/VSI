#include "thread.h"
#include <QtCore>

Thread::Thread(QObject* parent):
    QThread(parent),
    _algorithm(NULL),
    _dataReader(NULL),
    SleepTime(50)
{
    connect(_algorithm, SIGNAL(NumberChanged()), this, SLOT(onNumberChanged()));

    if(_dataReader) Data = _dataReader->read();
    else //Если не считываем информацию - генерируем рандомно
        for(int i = 0; i < 150; ++i)
            Data.push_back(qrand() % 50);
}
Thread::Thread(Algorithm* alg, QObject* parent):
    QThread(parent),
    _algorithm(alg),
    _dataReader(NULL),
    SleepTime(50)
{
    connect(_algorithm, SIGNAL(NumberChanged()), this, SLOT(onNumberChanged()));

    if(_dataReader) Data = _dataReader->read();
    else //Если не считываем информацию - генерируем рандомно
        for(int i = 0; i < 150; ++i)
            Data.push_back(qrand() % 50);
}
Thread::Thread(Algorithm* alg, DataReader* dataR, QObject* parent):
    QThread(parent),
    _algorithm(alg),
    _dataReader(dataR),
    SleepTime(50)
{
   connect(_algorithm, SIGNAL(NumberChanged()), this, SLOT(onNumberChanged()));

   if(_dataReader) Data = _dataReader->read();
   else //Если не считываем информацию - генерируем рандомно
       for(int i = 0; i < 150; ++i)
           Data.push_back(qrand() % 50);
}

void Thread::run()
{
  //  if(Data.size())
    _algorithm->calculate(Data);
}

void Thread::onNumberChanged()
{
    //msleep(SleepTime);
}
