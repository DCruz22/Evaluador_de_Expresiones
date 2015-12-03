#include <iostream>
#include <windows.h>
#include "gestor.h"
#include <sstream>

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
    cin.get();
    iniciar();
}

void Gestor::ingresarExpresion()
{
        Pila* pila = new Pila();
        string expresion = "";
        string digitos = "";
        char operador = '0';
        cin.ignore();
        cout << "Ingrese una expresion" << endl;
        getline(cin, expresion);
        for (int i = 0; i <= expresion.size(); i++){
            if(expresion[i] == '+' || expresion[i] == '-' || expresion[i] == '*' || expresion[i] == '/'){
                operador = expresion[i];
                string s(1, operador);
                Arbol* arbol = crearArbol(pila, s);
                pila -> push(new Elemento(arbol -> calcularResultado()));
            }
            else if(expresion[i] != ' '){
                digitos += expresion[i];
            }
            else if(expresion[i] == ' ' && digitos != ""){
                Elemento* numero = new Elemento(toInt(digitos));
                digitos = "";
                pila->push(numero);
            }

        }
        cout << "El resultado es: " << pila -> pop() -> getNumero() << endl;
}

Arbol* Gestor::crearArbol(Pila* pila, string operador)
{
    string primero = toString(pila -> pop() -> getNumero());
    string segundo = toString(pila -> pop() -> getNumero());

    Nodo* signo = new Nodo(operador);
    Nodo* num1 = new Nodo(primero);
    Nodo* num2 = new Nodo(segundo);

    signo -> agregarHijo(num1);
    signo -> agregarHijo(num2);

    return new Arbol(signo);
}

int Gestor::toInt(std::string numero)
{
    return atoi(numero.c_str());
}
string Gestor::toString(int numero)
{
    stringstream convert;
    convert << numero;
    return convert.str();
}

Gestor::~Gestor()
{

}
