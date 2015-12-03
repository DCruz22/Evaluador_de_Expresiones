#ifndef GESTOR_H
#define GESTOR_H

#include "pila.h"

class Gestor
{
    public:
        Gestor();
        void iniciar();
        void imprimirCabecera();
        void imprimirMenu();
        void regresarAlMenu();
        void ingresarExpresion();
        virtual ~Gestor();
    protected:
    private:
};

#endif // GESTOR_H
