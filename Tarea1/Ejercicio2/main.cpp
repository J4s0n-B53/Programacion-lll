#include <iostream>
using namespace std;

/*2. Elaborar un programa que permita capturar un numero
y determine el factorial (Sin recursividad)*/

int main()
{
    int num,i;
    int fac =1;
    cout << "Programa que determina el factorial de un numero:\n";
    cout << "\nDigite un numero:";
    cin >> num;

    for(i=1;i<=num;++i){
        fac *= i;
    }
    cout << "El factorial es:" << fac << endl;

    return 0;
}
