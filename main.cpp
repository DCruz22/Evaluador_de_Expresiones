#include <iostream>
#include <stdlib.h>
#include <Pila.h>

using namespace std;

int main()
{
    cout << "Bienvenidos a la Calculadora Polaca Inversa" << endl;
    bool Respuesta = true;
    while(Respuesta){
        Pila* pila = new Pila();
        string Operacion = "";
        string Ele = "";
        char Operador = '0';
        int e1;
        int e2;
        int resultado = 0;
        cout << "Ingrese la operacion" << endl;
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
                if(Ele != ""){
                    Elemento* alala = new Elemento(atoi(Ele.c_str()));
                    Ele = "";
                    pila->push(alala);
                }
            }

            if(resultado != 0){
                Elemento* b = new Elemento(resultado);
                resultado = 0;
                pila->push(b);
            }

        }
        cout << pila->pop()->getNumero() << endl;
        cout << "Deseas continuar ? (Presione 'N' para salir)" << endl;
        char continuar = '0';
        cin >> continuar;
        if(continuar == 'n' || continuar == 'N'){
            return 0;
        }
    }
    return 0;
}
