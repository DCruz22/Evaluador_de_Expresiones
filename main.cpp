#include <iostream>
#include <stdlib.h>
#include <gestor.h>

using namespace std;

int main()
{
    Gestor* gestor = new Gestor();
    gestor -> iniciar();
    delete gestor;
    return 0;
}
