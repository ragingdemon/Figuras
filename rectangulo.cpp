#include "rectangulo.h"
#include <sstream>

Rectangulo::Rectangulo(double base, double altura) :
    Bidimensional(), base(base),altura(altura)
{

}

Rectangulo::Rectangulo(const Rectangulo &r) : Bidimensional(r)
{

}

Rectangulo::~Rectangulo()
{

}

double Rectangulo::getBase() const
{
    return base;
}

void Rectangulo::setBase(double value)
{
    base = value;
}

double Rectangulo::getAltura() const
{
    return altura;
}

void Rectangulo::setAltura(double value)
{
    altura = value;
}

double Rectangulo::getPerimetro() const
{
    return (2*base) + (2*altura);
}

double Rectangulo::getArea() const
{
    return base * altura;
}

std::string Rectangulo::toString()const
{
    std::stringstream ss;
    ss<<"Rectangulo: "<<'['<<base<<','<<altura<<']'<<" area = "<<getArea()<<','<<" perimetro = "<<getPerimetro();
    return ss.str();
}
