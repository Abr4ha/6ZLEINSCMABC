#include <iostream>
using namespace std;
int main(){
  /*//crear un do while
  int i = 1 ;
  do{
    //impirme cada elemento hasta el 10
    cout<<i<<endl;
    ++i;
  }while(i<=10);*/
  /*int cont = 1;
  while(cont <= 10){
    cout<<cont<<endl;
    cont++;
  }
  cout<<"Wii se acaccbo";*/
  /*int contador = 1;
  while(contador <= 10){
     cout<<"Debo hacer la tarea T_T "<<contador<<endl;
     contador++;
  }
  cout<<"Wii se a cabo\n";*/
  //for - se ocupa para condicioness numericas
 /* for(int i = 1; i<=10; i++)
      cout<<i<<endl;*/
  int seleccion=0;
  do{
     cout<<"\nMenu 1, 2, 3 otra opion es salir\n";
     cout<<"1: Opcion\n";
     cout<<"2: Opcion\n";
     cout<<"3: Opcion\n";
     cout<<"otra opcion salir\n";
     cout<<"Ingresa la seleccion";
     cin>>seleccion;
     switch(seleccion){
       case 1:
         cout<<"Opcon 1";
         break;
       case 2:
         cout<<"opcion 2";
         break;
       case 3:
         cout<<"Opcion 3";
         break;
       default:
         cout<<"rayos";
         break;
     }
  }while((seleccion > 0 )&&(seleccion < 4));
  //tarea investigar cuales son los componentes y elementos de una lista}
