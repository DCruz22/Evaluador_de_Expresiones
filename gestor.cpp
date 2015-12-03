#include <iostream>
#include <windows.h>
#include "gestor.h"

using namespace std;

Gestor::Gestor()
{
    //ctor
}
void Gestor::iniciar()
{
    int opcion;
    imprimirCabecera();
    imprimirMenu();
    cin >> opcion;
    switch(opcion){
    case 1:
        imprimirCabecera();
        ingresarExpresion();
        regresarAlMenu();
        break;
    case 2:
        break;
    default:
        iniciar();
    }
}

void Gestor::imprimirCabecera()
{
    system("cls");
    cout << "*********************************" << endl;
    cout << "*  Calculadora polaca inversa  *" << endl;
    cout << "*\t By: Edwardenis, Adonis & Dariel\t *" << endl;
    cout << "********************************\n" << endl;
}

void Gestor::imprimirMenu()
{
    cout << "1- Ingresar una expresion" << endl;
    cout << "2- Salir\n" << endl;
    cout << "Elija una opcion => ";
}

void Gestor::regresarAlMenu()
{
    cout << "\n--Presione ENTER para regresar el menu principal--\n" << endl;
    cin.ignore();
    cin.get();
    iniciar();
}

void Gestor::ingresarExpresion()
{
        Pila* pila = new Pila();
        string Operacion = "";
        string Ele = "";
        char Operador = '0';
        int e1;
        int e2;
        int resultado = 0;
        cin.ignore();
        cout << "Ingrese una expresion" << endl;
        getline(cin, Operacion);
        for (int i = 0; i <= Operacion.size(); i++){
            if(Operacion[i] == '+' || Operacion[i] == '-' || Operacion[i] == '*' || Operacion[i] == '/'){
                Operador = Operacion[i];
                e1 = pila->pop()->getNumero();
                e2 = pila->pop()->getNumero();
                switch(Operador){
                case '+':{
                    resultado = e1 + e2;
                    break;
                }
                case '-':{
                    resultado = e1 - e2;
                    break;
                }
                case '*':{
                    resultado = e1 * e2;
                    break;
                }
                case '/':{
                    resultado = e1 / e2;
                    break;
                }
                }
            }
            else if(Operacion[i] != ' '){
                Ele += Operacion[i];
            }
            else if(Operacion[i] == ' '){
                Elemento* alala = new Elemento(atoi(Ele.c_str()));
                Ele = "";
                pila->push(alala);
            }

        }
        cout << resultado << endl;
}

Gestor::~Gestor()
{

}
