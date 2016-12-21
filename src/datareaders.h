#ifndef DATAREADERS_H
#define DATAREADERS_H

#include <QVector>

typedef double readVectEl;  //Тип элементов векторов, используемых при чтении.
                            //PS: меня смущает текущий тип double. Он не должен быть char? Ну или int?

class DataReader
{
public:
    DataReader(){}
    DataReader(const DataReader& dataR){}
    ~DataReader(){}

    virtual QVector<readVectEl> read()=0;
protected:
};

class JSONReader: public DataReader
{
public:
    JSONReader():DataReader(){}
    JSONReader(const JSONReader& jsonR):DataReader(jsonR){}
    ~JSONReader(){}

    virtual QVector<readVectEl> read();
protected:
};

class XMLReader: public DataReader
{
public:
    XMLReader():DataReader(){}
    XMLReader(const XMLReader& xmlR):DataReader(xmlR){}
    ~XMLReader(){}

    virtual QVector<readVectEl> read();
protected:
};

#endif // DATAREADERS_H
