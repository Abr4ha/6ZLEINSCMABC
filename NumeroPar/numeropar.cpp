#include<iostream>
using namespace std;

int main(){
	int num,opr,opc=0;
  do{
	do{
		cout<<"\n\tDigite un numero positivo mayor a cero : "<<endl;
		cin>>num;
	}while(num < 0 );
	opr = num % 2;
	if( opr != 0){
		cout<<"\n\tnumero impar : "<<num<<endl;
	}else{
		cout<<"\n\tnumero par : "<<num<<endl;
	}
	cout<<"\n\tDigite un numero mayor a cero para salir"<<endl;
	cin>>opc;
	}while(opc < 1);
}
