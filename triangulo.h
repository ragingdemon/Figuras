#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "bidimensional.h"
#include <string>
using std::string;

class Triangulo : public Bidimensional
{
    double lado1,lado2,lado3;
public:
    Triangulo(double lado1 = 1,double lado2 = 1,double lado3 = 1);
    Triangulo(const Triangulo&);
    virtual ~Triangulo();
    virtual double getPerimetro()const;
    virtual double getArea()const;
    virtual string toString()const;

};

#endif // TRIANGULO_H
