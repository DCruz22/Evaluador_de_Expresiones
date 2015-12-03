#ifndef NODO_H
#define NODO_H
#include "string"

class Nodo
{
    public:
        Nodo(std::string valor);
        void agregarHijo(Nodo* hijo);
        void setValor(std::string valor);
        void setPrimerHijo(Nodo* primero);
        void setUltimoHijo(Nodo* ultimo);
        void setSiguiente(Nodo* siguiente);
        std::string getValor();
        Nodo* getHijos();
        Nodo* getSiguiente();
        virtual ~Nodo();
    protected:
    private:
        std::string _valor;
        Nodo* _primerHijo;
        Nodo* _ultimoHijo;
        Nodo* _siguiente;
};

#endif // NODO_H
