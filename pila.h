#ifndef PILA_H
#define PILA_H
#include "Elemento.h"


class Pila
{
    public:
        Pila();
        virtual ~Pila();
        Elemento* getPrimerElemento();
        Elemento* getUltimoElemento();
        void push(Elemento* elemento);
        Elemento* pop();
    private:
        Elemento* primerElemento;
        Elemento* ultimoElemento;
};

#endif // PILA_H
