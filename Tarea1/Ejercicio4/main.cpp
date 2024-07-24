#include <iostream>

using namespace std;

/*4. Elaborar un programa que haciendo uso de clases,
 permita modelar el algoritmo de la multiplicación RUSA*/

int main()
{
   int num1,num2,resultado = 0;

   cout<< "\nEscriba un numero:";
   cin>> num1;
   cout<< "\nEscriba el segundo numero:";
   cin>> num2;

   while (num1>=1){
    if(num1%2!=0) {
        resultado = resultado + num2;
    }
    num1 = num1/2;
    num2 = num2*2;
   }
   cout<< "\n EL RESULTADO ES:"<<resultado<<endl;
    return 0;
}
