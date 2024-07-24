#include <iostream>
using namespace std;

/*3.Elaborar un programa que permita capturar un numero y determine si es perfecto.*/


int main()
{
     int num , Division = 0;
 cout << "Programa que verifica si un numero es perfecto";
 cout<< "\n*****************";

 cout <<"\nDigite un numero:"<<endl;
 cin>>num;
 for (int i = 1; i<num; i++)
 {
  if(num % i == 0){
  Division += i;
 }
 }
 if (num == Division){
  cout<< "\n*****************";
  cout<< "\nEs perfecto:" << num <<endl;
 }
 else{
  cout<< "\n*****************";
  cout<<"\nNo es perfecto:" << num <<endl;
}

 return 0;
}
