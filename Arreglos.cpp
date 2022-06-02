#include<iostream>
using namespace std;
int main(){
  int numero[5] = {200, 150, -50, 300, 100};
  int suma = 0;
  /* numero[0] = 200;
  numero[1] = 150;
  numero[2] = 100;
  numero[3] = 50;
  numero[4] = 300;*/
  //hallar la suma de los elemntos
  //  suma = numero[0] + numero[1] + numero[2] + numero[3] + numero[4];
  int i;
  for(i=0; i<=4; ++i){
    suma += numero[i];
    cout<<"Dato "<<suma<<endl;
  }
  cout<<"la suma es: "<<suma<<endl;
  return 0;
}
