#include <iostream>
using namespace std;
const int resta = 2022;
void error()
{
  cin.clear();
  cin.ignore(100, '\n');
  cout << "\n\t[!] Error Intorducir un numero entero\n";
}
int main(){
  int ano = 0, dia=0, mes=0;
  do{
    cout << "\tIngresa el dia de nacimiento : ";
    cin >> dia;
    while( cin.fail()){
      error();
    }
    if(dia < 1 || dia > 31){
      cout << "\n\t[!] Error ingrese un dia valido\n";
    }
  }while(dia < 1 || dia > 31);
  do{
    cout << "\tIngresa el mes de nacimiento, un numero entero : ";
    cin >> mes;
    while( cin.fail()){
      error();
    }
    if(mes < 1 || mes > 12){
      cout << "\n\t[!] Error ingrese un mes valido\n";
    }
  }while(mes < 1 || mes > 12);
  do{
   cout << "Ingresa el año de nacimiento : ";
   cin >> ano;
    while( cin.fail()){
      error();
    }
   if(ano > 2022){
     cout << "\n\t[!] Error no puede ingresar una año mayor al actual\n";
   }else if (ano < 1){
     cout << "\n\t[!] Error año no valido";
   }
  }while(ano > 2022 || ano < 1 );
  if(mes < 6){
    if (mes == 5 && dia > 24){
      cout << "Tu tienes : " << (( resta - ano )-1)<< " años" << endl;
    }else{
      cout << "Tu tienes : " << ( resta - ano )<< " años" << endl;
    }
  }else{
    cout << "Tu tienes : " << (( resta - ano )-1) << " años" << endl;
  }
  return 0;
}
