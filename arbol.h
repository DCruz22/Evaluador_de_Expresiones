#ifndef ARBOL_H
#define ARBOL_H
#include "string"
#include "nodo.h"

class Arbol
{
    public:
        Arbol(Nodo* raiz);
        void setRaiz(Nodo* raiz);
        Nodo* getRaiz();
        int calcularResultado();
        virtual ~Arbol();
    protected:
    private:
        Nodo* _raiz;
};

#endif // ARBOL_H
