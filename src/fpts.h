#ifndef FTPS_H
#define FTPS_H

#include "algorithm.h"

enum CellType{CELLT_EMPTY, CELLT_WALL, CELLT_START, CELLT_END};

struct MapCell
{
    MapCell():x(0),y(0),type(CELLT_EMPTY){}
    MapCell(int X, int Y):x(X),y(Y),type(CELLT_EMPTY){}
    MapCell(int X, int Y, CellType Type):x(X),y(Y),type(Type){}
    MapCell(const MapCell& cell):x(cell.x),y(cell.y),type(cell.type){}

    int x;
    int y;
    CellType type;
};

//class FPT: Algorithm<MapCell> //FPT = FindPath
class FPT: Algorithm //FPT = FindPath
{
public:
    FPT():Algorithm(){}
    FPT(const FPT& fpt):Algorithm(fpt){}
    ~FPT(){}

    virtual QVector<double> calculate(QVector<double> vect)=0;
private:

};

class TheOne: public FPT //я без понятия, как алгоритм по настоящему называется
{
public:
    TheOne():FPT(){}
    TheOne(const TheOne& one):FPT(one){}
    ~TheOne(){}

    virtual QVector<double> calculate(QVector<double> vect);
private:
};

#endif // FTPS_H
