#include <iostream>
using namespace std;
int main(){
  int edad;
  do{
    cout << "Ingresa la edad : ";
    cin >> edad;
  }while(edad < 0);
  if (edad >= 18){
    cout << "Si es mayor de Edad" << endl;
  }else{
    cout << "Es menor de Edad" << endl;
  }
  cout << "fin";
  return 0;
}
