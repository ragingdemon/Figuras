#ifndef TRIDIMENSIONAL_H
#define TRIDIMENSIONAL_H
#include "figura.h"
#include <string>
class Tridimensional : public Figura
{
public:
    Tridimensional();
    Tridimensional(const Tridimensional &t);
    virtual ~Tridimensional();
    virtual double getArea()const=0;
    virtual double getVolumen()const=0;
    virtual std::string toString()const=0;
};

#endif // TRIDIMENSIONAL_H
