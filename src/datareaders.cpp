#include "datareaders.h"

QVector<readVectEl> DataReader::read()
{
    QVector<readVectEl> vect;
    vect.push_back(3.14);
    return vect;
}

QVector<readVectEl> JSONReader::read()
{
    QVector<readVectEl> vect;
    vect.push_back(3.14);
    return vect;
}

QVector<readVectEl> XMLReader::read()
{
    QVector<readVectEl> vect;
    vect.push_back(3.14);
    return vect;
}
