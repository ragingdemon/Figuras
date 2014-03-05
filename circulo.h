#ifndef CIRCULO_H
#define CIRCULO_H
#include <string>
#include "bidimensional.h"
class Circulo : public Bidimensional
{
    double radio;
public:
    Circulo(double radio = 1);
    Circulo(const Circulo &c);
    virtual ~Circulo();
    virtual double getPerimetro()const;
    virtual double getArea()const;
    virtual std::string toString()const;

};

#endif // CIRCULO_H
