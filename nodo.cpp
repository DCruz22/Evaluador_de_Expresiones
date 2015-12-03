#include "nodo.h"

Nodo::Nodo(std::string valor): _valor(valor), _primerHijo(NULL), _ultimoHijo(NULL), _siguiente(NULL)
{

}

void Nodo::agregarHijo(Nodo* hijo)
{
    if(_primerHijo == NULL){
        _primerHijo = hijo;
        _ultimoHijo = hijo;
    }else{
        _ultimoHijo -> setSiguiente(hijo);
        _ultimoHijo = NULL;
    }
}

void Nodo::setValor(std::string valor)
{
    _valor = valor;
}

void Nodo::setPrimerHijo(Nodo* primero)
{
    _primerHijo = primero;
}

void Nodo::setUltimoHijo(Nodo* ultimo)
{
    _ultimoHijo = ultimo;
}

Nodo* Nodo::getSiguiente()
{
    return _siguiente;
}

void Nodo::setSiguiente(Nodo* siguiente)
{
    _siguiente = siguiente;
}

Nodo* Nodo::getHijos()
{
    return _primerHijo;
}
std::string Nodo::getValor()
{
    return _valor;
}

Nodo::~Nodo()
{
    //dtor
}
