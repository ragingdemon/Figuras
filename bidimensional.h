#ifndef BIDIMENSIONAL_H
#define BIDIMENSIONAL_H
#include "figura.h"
#include "point2d.h"
class Bidimensional : public Figura
{
public:
    Bidimensional();
    Bidimensional(const Bidimensional &);
    virtual ~Bidimensional();
    virtual double getArea()const=0;
};

#endif // BIDIMENSIONAL_H
