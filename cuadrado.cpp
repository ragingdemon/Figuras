#include "cuadrado.h"
#include <cmath>
#include <sstream>
using std::string;
using std::stringstream;

Cuadrado::Cuadrado(Point2D &p1, Point2D &p2)
{
    double distance = p1.distance(p2);
    points= new Point2D[4];
    points[0] = p1;
    points[1] = p2;
    points[2] = Point2D(p1.getX()+distance, p2.getY());
    points[3] = Point2D(p1.getX()+distance, p1.getY());
}

Cuadrado::Cuadrado(const Cuadrado &c) : Bidimensional(c)
{

}

Cuadrado::~Cuadrado()
{
    delete[] points;
}

double Cuadrado::getArea() const
{
    return pow(points[0].distance(points[1]),2);
}

string Cuadrado::toString() const
{
    stringstream ss;
    for (int i = 0; i < 4; ++i) {
        ss<<points[i].toString()<<' ';
    }
    return ss.str();

























}
