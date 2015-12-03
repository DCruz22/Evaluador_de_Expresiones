#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <string>


class Elemento
{
    public:
        Elemento(int numero);
        virtual ~Elemento();
        int getNumero();
        void setNumero(int numero);
        Elemento* getAnterior();
        void setAnterior(Elemento* anterior);
    private:
        int numero;
        Elemento* anterior = NULL;
};

#endif // ELEMENTO_H
