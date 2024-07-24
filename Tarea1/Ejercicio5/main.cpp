#include <iostream>
using namespace std;
#include <stdlib.h>
#include "Telefono.h"

/*5. Elaborar un programa que permita simular el comportamiento de un teléfono celular (Haciendo uso de clases)*/

int menu(){
    int op;
    cout << "***********************\n";
    cout << "* Menu de opciones    *\n";
    cout << "***********************\n";
    cout << "1. Hacer llamada:\n";
    cout << "2. Enviar mensaje:\n";
    cout << "3. Hacer recarga:\n";
    cout << "4. Consultar saldo:\n";
    cout << "5. Salir:\n";
    cout <<"\nDigite una opcion:\n ";
    cin >> op;
    return op;
}

int main(){
    int opc;
    float recarga;
    Telefono t1(0.1, 0.05);
    do{
        system("cls");
        opc = menu();
        switch (opc){
            case 1:
                ///Hacer llamadas
                t1.hacerLlamadas()
                ? cout << "Llamada ejecutada con exito\n" : cout << "No dispone de saldo\n";
                break;
            case 2:
                ///Enviar mensajes
                t1.enviarMensajes()
                ? cout <<"Mensaje enviado con exito\n" : cout << "No dispone de saldo\n";
                break;
            case 3:
                ///Hacer recargas
                cout << "Digite el monto de la recarga : ";
                cin >> recarga;
                t1.hacerRecargas(recarga);
                cout << "Recarga realizada con exito\n";
                break;
            case 4:
                ///cOnsultar datos
                t1.consultarDatos();
                break;
            case 5:
                break;
            default:
                cout << "Error, la opcion no esta definida\n";
                break;

        }
        system("pause");
    }while (opc!=5);

    return 0;
}
