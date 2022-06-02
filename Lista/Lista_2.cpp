/*
	creacion de una lita que puede contener un dato y manejo de apuntadores
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio>
#include<iostream>
/*
	Libreria la cual da la extencion a stdio, como librerai standar, para el manejo de consola usando comando ch(), clrscr(). gotoxy(), textcolor(), y otras
	stdlib es una libreria standar para el manejo de funciones de busqueda, ordenaiento, arboles, pilas, colas, lista nos sirve para las estructuras de datos
*/
using namespace std;
//se define la lista de acuerdo a un nodo,accso,dato, el apuntador y su
struct dato{
  //los datos de la lista
  int i;
  dato  *s; //siguiente
}*a, *i, *p *e;
//introdccir los metodos de acceso a la lista
int buscar(int d);
void insertar(int dat);
void mostrar(void);
void borrar(void);
void menu(void);
//void guardar(void);
//void cargar(void);
int main(){
	menu();


  cout<<endl;
  return 0;
}
void menu(void){
	int opc, da;
	do{
		cout<<"Ejemplo de una lista que carga datos";
		cout<<"1.-Buscar Datos: ";
		cout<<"2.-Insertar Datos";
		cout<<"3.-Mostart Datos:";
		cout<<"4.-Borrar Dato";
		cout<<"5.-Borrar Datos en Archivo";
		cout<<"6.-Cargar Datos en Archivo";
		cout<<"7.-Salir:";
		cout<<"Seleccione una opcion deceada";
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"\n\nIgrese el dato a buscar";
				cin>>da;
				if(buscar(da)){
					cout<<"Dato existente";
				}else{
					cout<<"Dato no existe, solo juguito";
					getch()d;
				}
			break;
			case 2:
				cout<<"\nIngresa el Dato";
				cin>>da;
				insertar(da);
				break;
			case 3:
				mostrar();
				break;
			case 4:
				borrar();
				break
			case 5:
				//guardar();
				break;
			case 6:
				//cargar();
				break;
			case 7:
				cout<<"hasta luego ...";
				getch();
				//borrar los datos de la lista
				p=i;
				while(p){
					a=p;
					p=p->s;
					delete(a); //metodo de la lista
				}
				exit(0);
			default:
				cout<<"[!] Error opcion no valida";
				getch();
		}
	}while(opc);
}
void mostrar(void){
	int cont=1;
	if(!i){
		cout<<"Ho hay lista que mostrar."
		getch();
		return;
	}
	p=i;
	cout<<"\n\n"
	while(p){
		//como si existe la lista la recorremos
		cout<<cont++<<"\nValor ="<<p->i<<endl;
		p = p->s;
	}
	cout<<"n Fin de la lista";
	getch();
}
