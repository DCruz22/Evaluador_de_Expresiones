#include "arbol.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

Arbol::Arbol(Nodo* raiz): _raiz(raiz)
{

}

void Arbol::setRaiz(Nodo* raiz)
{
    _raiz = raiz;
}

Nodo* Arbol::getRaiz()
{
    return _raiz;
}

int Arbol::calcularResultado()
{
    char operador = _raiz -> getValor()[0];
    int num1 = atoi(_raiz -> getHijos() -> getValor().c_str());
    int num2 = atoi(_raiz -> getHijos() -> getSiguiente() -> getValor().c_str());
    switch(operador){
        case '+':
            return num1 + num2;
            break;
        case '-':
            return num2 - num1;
            break;
        case '*':
            return num1 * num2;
            break;
        case '/':
            return num2 / num1;
            break;
        default:
            return 0;
    }
}

Arbol::~Arbol()
{
    //dtor
}
