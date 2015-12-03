#include "Elemento.h"

Elemento::Elemento(int numero)
{
    this -> numero = numero;
    this -> anterior = NULL;
}

Elemento::~Elemento()
{

}

int Elemento::getNumero()
{
    return numero;
}

void Elemento::setNumero(int numero)
{
    this->numero = numero;
}

Elemento* Elemento::getAnterior()
{
    return anterior;
}

void Elemento::setAnterior(Elemento* anterior)
{
    this->anterior = anterior;
}
