#include <iostream>
using namespace std;
//arreglo bidimencional
int main(){
  int a,b;
  //int valor=0;
  cout<<"Introduce el numero de filas y columnas en el orden dicho : "<<endl;
  cin>>a>>b;
  cout<<"Numero de filas : "<<a<<"\nNumero de columnas : "<<b<<endl;
  char matriz [a][b];
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      cout<<"Introdusca el valor de fila "<<i + 1<<" y columna "<<j + 1<<endl;
      cin>>matriz[i][j];
    }
  }
  cout<<"\nEl Arreglo es el siguiente :"<<endl;
  for(int i=0;i<a;i++){
  		cout<<"|";
    for(int j=0;j<b;j++){
    	cout<<"\t"<<matriz[i][j]<<"\t";
    }
    	cout<<"|"<<endl;
	}
	cout<<"\nEl Arreglo transpuesto es :"<<endl;
  for(int j=0;j<b;j++){
  		cout<<"|";
    for(int i=0;i<a;i++){
    	cout<<"\t"<<matriz[i][j]<<"\t";
    }
    	cout<<"|"<<endl;
	}
  cout<<endl;
  return 0;
}

