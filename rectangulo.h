#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <string>
#include "bidimensional.h"
using std::string;

class Rectangulo : public Bidimensional
{
    double base,altura;
public:
    Rectangulo(double base = 1, double altura = 1);
    Rectangulo(const Rectangulo &r);
    virtual ~Rectangulo();

    double getBase() const;
    void setBase(double value);
    double getAltura() const;
    void setAltura(double value);
    virtual double getPerimetro()const;
    virtual double getArea()const;
    virtual string toString()const;
};

#endif // RECTANGULO_H
