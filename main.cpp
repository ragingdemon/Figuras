#include <iostream>
#include <vector>
#include "figura.h"
#include "bidimensional.h"

#include "rectangulo.h"
#include "triangulo.h"
#include "circulo.h"
using namespace std;

int main()
{
    vector<Figura*> figuras;
    figuras.push_back(new Rectangulo(2,2));
    figuras.push_back(new Triangulo(1,1,1));
    figuras.push_back(new Circulo());
    for (int i = 0; i < figuras.size(); ++i) {
        Bidimensional *bidimensional;
        if (bidimensional = dynamic_cast<Bidimensional*>(figuras[i])) {
         cout<<bidimensional->toString()<<endl;
        } else{
        }
    }

    for (int i = 0; i < figuras.size(); ++i) {
        delete figuras[i];
    }
    return 0;
}

