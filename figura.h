#ifndef FIGURA_H
#define FIGURA_H
#include <string>
using std::string;

class Figura
{
public:
    Figura();
    Figura(const Figura&);
    ~Figura();
    virtual string toString()const=0;
};

#endif // FIGURA_H
