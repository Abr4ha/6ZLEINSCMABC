#include<iostream>
using namespace std;
//defiir la estructura de la lista
struct Nodo{
  //los datos de la lista
  int valor;
  Nodo *siguiente;
};
//metdo para insertar
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void eliminarElemento(Nodo *);
int main(){
  //declarar mi variable de la Lista
  Nodo *lista = NULL;
  //variables
  //int opcion=1;
  int numero, i=0, valores, op=0;
  cout<<"\nTrabando con listas (simples, doblemente enlazadas, circulares y circulares dobles)"<<endl;
  while( op != 4 ){
    cout<<"\n\tEjemplo de lista simple :"<<endl;
    cout<<"\n1.- Insertar nuevo valor en la lista"<<endl;
    cout<<"2.- ver la lista"<<endl;
    cout<<"3.- Eliminar elemento de la lista"<<endl;
    cout<<"4.- salir\n"<<endl;
    cin>>op;
    switch(op){
    	case 1:
      	cout<<"Indica el numero de valores a introducir\n";
        cin>>valores;
        while(i<valores){
        	cout<<"Valor["<<i<<"]\n";
          cin>>numero;
          //mando a llamar al metodo para insertarlo
          insertarLista(lista, numero);
          i++;
        }
        break;
        cout<<"Valor []\n";
      case 2:
      	if( lista != 0 ){
	        cout<<"Elementos de la lista :\n"<<endl;
  	      cout<<"\t";
					mostrarLista(lista);
        }else{
        	cout<<"\t[!] Lista vacia"<<endl;
        }
        cout<<endl;
        break;
      case 3:
      	if( lista !=0 ){
	      	cout<<"Especifique el numero de elementos a eliminar "<<lista<<endl;
  	    	cin>>valores;
	      	while(i<valores){
  	    		cout<<"valor["<<i<<"] a eliminar\n";
	      		cin>>numero;
  	      	eliminarElemento(lista);
    	    	i++;
      		}
      	}else{
      		cout<<"\t[!] Lista Vacia"<<endl;
      	}
      	cout<<endl;
      	break;
      default:
         cout<<"hasta luego ...";
		}
  }
  cout<<endl;
  return 0;
}
void insertarLista(Nodo *&lista, int numero){
  Nodo *insLista = new Nodo();
  insLista->valor = numero;
  //necesito un axuliar para encadenar
  Nodo *aux = lista;
  Nodo *aux2;
  //se meten ordenados los datos
  while((aux!=NULL)&&(aux->valor < numero)){
  	aux2 = aux;
  	aux = aux->siguiente;
  }
  if(lista == aux){
  	lista = insLista;
  }else{
  	aux2->siguiente = insLista;
  }
  insLista->siguiente = aux;
  cout<<"\tElemento : "<<numero<<" [+] Insertado\n";
}
void mostrarLista(Nodo *lista){
	Nodo *recurso= new Nodo();
	recurso = lista;
	while(recurso != NULL){
		cout<<recurso->valor<<" ";
		recurso = recurso->siguiente;
	}

}
void eliminarElemento(Nodo *lista){
	cout<<"Elemnto Eliminado"<<endl;
}
