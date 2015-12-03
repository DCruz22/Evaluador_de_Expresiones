#include "Pila.h"
Pila::Pila()
{
    primerElemento = NULL;
    ultimoElemento = NULL;
}

Pila::~Pila()
{
    //dtor
}

Elemento* Pila::getPrimerElemento()
{
    return primerElemento;
}

Elemento* Pila::getUltimoElemento()
{
    return ultimoElemento;
}

void Pila::push(Elemento* elemento)
{
    if(primerElemento == NULL){
        primerElemento = elemento;
        ultimoElemento = elemento;
    }
    else{
        elemento->setAnterior(ultimoElemento);
        ultimoElemento = elemento;
    }
}

Elemento* Pila::pop()
{
    if(ultimoElemento == NULL){
        return NULL;
    }
    Elemento* retorno = ultimoElemento;
    ultimoElemento = retorno->getAnterior();
    return retorno;
}
