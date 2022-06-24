#include <iostream>
#include <conio.h>
using namespace std;
struct nodo {
	char color[20];
	struct nodo* siguiente;
};
struct cola {
	nodo* adelante;
	nodo* atras;
};
void encolar(struct cola &colores, struct nodo color) {
	struct nodo*aux = new(struct nodo);
	*aux =color ;
	aux->siguiente = NULL;
	if (colores.adelante == NULL) {
		colores.adelante = aux;
	}else (colores.atras)->siguiente = aux; {
		colores.atras = aux;
	}
}
struct nodo desencolar(struct cola&colores) {
	struct nodo*aux;
	aux = colores.adelante;
	struct nodo n = *aux;
	colores.adelante = (colores.adelante)->siguiente;
	delete(aux);
	return n;
}
void vercola(struct cola colores) {
	struct nodo* aux;
	aux = colores.adelante;
	while (aux!=NULL) {
		cout <<aux->color<<" ";
		aux = aux->siguiente;
	}
	cout << endl;
}

int main(){
	struct nodo color;
	struct cola colores;
	colores.adelante = NULL;
	colores.atras = NULL;
	char delet[20];
	cout << "\nEscriba el color a encolar : ";
	cin >> color.color;
	encolar(colores, color);
	cout << "\nEscriba el color a encolar : ";
	cin >> color.color;
	encolar(colores, color);
	delet = desencolar(colores);

	cout << "\nEscriba el color a encolar : ";
	cin >> color.color;
	encolar(colores, color);
	cout << "\nEscriba el color a encolar : ";
	cin >> color.color;
	encolar(colores, color);
	desencolar(colores);
	desencolar(colores);

	cout << "\nEscriba el color a encolar : ";
	cin >> color.color;
	encolar(colores, color);
	cout << "\nEscriba el color a encolar : ";
	cin >> color.color;
	encolar(colores, color);
	desencolar(colores);
	cout << "\nEscriba el color a encolar : ";
	cin >> color.color;
	encolar(colores, color);
	desencolar(colores);
	cout << "\nEscriba el color a encolar : ";
	cin >> color.color;
	encolar(colores, color);
	desencolar(colores);
	cout << "\nEscriba el color a encolar : ";
	cin >> color.color;
	encolar(colores, color);
	desencolar(colores);
	cout << "\nEscriba el color a encolar : ";
	cin >> color.color;
	encolar(colores, color);
	desencolar(colores);
	vercola(colores);
	getch();
	return 0;
}
