#ifndef BIDIMENSIONAL_H
#define BIDIMENSIONAL_H
#include <string>
#include "figura.h"
using std::string;

class Bidimensional : public Figura
{
public:
    Bidimensional();
    Bidimensional(const Bidimensional &b);
    virtual ~Bidimensional();
    virtual double getPerimetro()const=0;
    virtual double getArea()const=0;
    virtual string toString()const;
};

#endif // BIDIMENSIONAL_H
