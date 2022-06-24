#include <stlib.h>
using namespace std;
struct ICO{
	char clave[20];
	char nombre[30];
	float calificacion;
}:

struct Nodo{
	ICO alumnos;
	Nodo *siguiente;
};
//metodod
void menu();
void agregarDatos(ICO &);
void insertarDatos(Nodo *&, Nodo *&, ICO);
bool c_vacia(Nodo *);
int main(){
	ICO alumnos;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	char opcion;
	do{
		menu();
		cin>>opcion;
		fflush(stdin);
		Nodo *aux = frente;
		switch(opcion){
			case '1':
				agregarDatos(alumnos);
				insertarDatos(frente, fin, alumnos);
				break;
			case '2':
				cout<<"\nCLAVE\tNombre\tCalificacion"<<endl;
				while(aux!=NULL){
					cout<<aux->alumnos.clave<<"\t"<<aux->alumnos.nombre<<"\t"<<aux->alumnos.calificacion<<endl;
					aux = aux->siguiente;
				}
				break;
			case 3:
				cout<<"Adios"<<endl;
				break;
			defult:
				cout<<"Opcion no valida"<<endl;
				break;
		}
		getch():
		cout<<"\nPresione una teclca para continuar"<<endl;
		system("cls");
	}while(opcion != '3');
	return 0;
}
void menu(){
	cout<<"Menu\n1.-Agregar Datos del Alumno\n2.-Mostrar Datos del alumno\n3.-Salir"<<endl;
}
void agregarDAtos(ICO &alumnos){
	cout<<"\Ningresaa la clave del alumno:\n"
	cin.getline(alumnos.clave, 20, '\n');
	cout<<"\Ningresaa el nombre del alumno:\n"
	cin.getline(alumnos.nombre, 30, '\n');
	cout<<"\Ningresaa la calificacion del alumno:\n"
	cin.getline(alumnos.calificacion);
}
void insertarDatos(Nodo *frete, Nodo *fin, ICO alumnos){
	Nodo *n_nodo = new Nodo();
	n_nodo -> alumnos = alumnos;
	n_nodo -> siguiente = NULL;
	if(c_vacia(frente)){
		frente = n_nodo;
	}else{
		fin -> siguiente = n_nodo;
	}
	 fin = n_nodo;
	}
bool c_vacia(Nodo *frente){
	//operador ternario
	return (frente == NULL)? true:false;
}
