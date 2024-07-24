#include <iostream>
#include <string>
using namespace std;

/*1. Elaborar un programa que permita capturar una cadena
de caracteres (sin espacios), y sin utilizar funciones
de conversi�n (toupper), mostrar la cadena en may�sculas y min�sculas.*/


int main() {
    string palabra;
    cout<< "\n*****************************************************************";
    cout<< "\nIngrese una palabra: ";
    cin>> palabra;

    cout<< "\n-----------------------------------------------------------------";
    cout<< "\nLa palabra escrita en mayusculas es: ";
    for (char& c : palabra) {
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
        }
    }
    cout<< palabra <<endl;

    cout<< "\n-----------------------------------------------------------------";
    cout<< "\nLa palabra escrita en minusculas es: ";
    for (char& c : palabra) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
    }
    cout<< palabra <<endl;

    return 0;
}

