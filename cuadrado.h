#ifndef CUADRADO_H
#define CUADRADO_H
#include "bidimensional.h"
#include "point2d.h"
using std::string;
class Cuadrado : public Bidimensional
{
    Point2D *points;
public:
    Cuadrado(Point2D&,Point2D&);
    Cuadrado(const Cuadrado &c);
    virtual ~Cuadrado();
    virtual double getArea() const;
    virtual string toString()const;
};

#endif // CUADRADO_H
