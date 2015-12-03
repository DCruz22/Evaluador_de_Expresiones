#ifndef GESTOR_H
#define GESTOR_H
#include "gestor.h"
#include "pila.h"
#include "arbol.h"
#include "string"
class Gestor
{
    public:
        Gestor();
        void iniciar();
        void imprimirCabecera();
        void imprimirMenu();
        void regresarAlMenu();
        void ingresarExpresion();
        Arbol* crearArbol(Pila* pila, std::string operador);
        std::string toString(int numero);
        int toInt(std::string numero);
        void anadirElemento(Pila* pila, std::string digitos);
        virtual ~Gestor();
    protected:
    private:
};

#endif // GESTOR_H
