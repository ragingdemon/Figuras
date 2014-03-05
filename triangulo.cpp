#include "triangulo.h"
#include <sstream>
#include <cmath>
Triangulo::Triangulo(double lado1, double lado2, double lado3) :
    Bidimensional(),lado1(lado1),lado2(lado2),lado3(lado3)
{

}

Triangulo::Triangulo(const Triangulo &) : Bidimensional()
{

}

Triangulo::~Triangulo()
{

}

double Triangulo::getPerimetro() const
{
    return lado1+lado2+lado3;
}

double Triangulo::getArea() const
{
    double s = (0.5) * (getPerimetro());
    return sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
}

string Triangulo::toString() const
{
    std::stringstream ss;
    ss<<"Triangulo: "<<'['<<lado1<<','<<lado2<<','<<lado3<<" area = "<<getArea()<<','<<" perimetro = "<<getPerimetro();
    return ss.str();
}
