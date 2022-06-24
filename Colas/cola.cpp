#include <iostream>
/*
  Ejemplo cola
  primera entrada
  primera salida
*/
using namespace std;

struct nodo {
    int nro;
    struct nodo* siguiente;
};
struct cola {
    nodo* adelante;
    nodo* atras;
};
//encolar
//metodo
void encolar(struct cola& q, int valor) {
    struct nodo* aux = new(struct nodo);
    aux->nro = valor;
    aux->siguiente = NULL;
    if (q.adelante == NULL) {
        q.adelante = aux;
    }
    else {
        (q.atras)->siguiente = aux;
    }
    //el puntero siempre apunta al ultimo
    q.atras = aux;
}
//funcion
int desencolar(struct cola &q) {
    int num;
    struct nodo* aux;
    //aux apunteal inicio de la colas
    aux = q.adelante;
    num = aux->nro;
    //dale delete a aux
    q.adelante = (q.adelante)->siguiente;
    delete(aux);
    return num;
}
//mostrar cola
void muestraCola(struct cola q) {
    //nodo auxiliar
    struct nodo* aux;
    //siempre adelate el nodo
    aux = q.adelante;
    //cola vacia
    while (aux != NULL) {
        cout << " " << aux->nro;
        //recorrer
        aux = aux->siguiente;
    }
    cout << "\t[+] Cola Mostrada\n" << endl;
}
//vaciar la cola, eliminar todos
void vaciarCola(struct cola &q) {
    struct nodo *aux;
    aux = q.adelante;
    while (q.adelante != NULL) {
        aux = q.adelante;
        q.adelante = aux->siguiente;
        delete(aux);
    }
    q.adelante = NULL;
    q.atras = NULL;
}
void menu() {
    cout << "\tEjemplo de una cola\n\n1.-Encolar\n2.-Desencolar\n3.-Mostrar cola\n4.-vaciar cola\n5.-Salir\n" << endl;
}
int main() {
    //declara prmero cola
    struct cola q;
    q.adelante = NULL;
    q.atras = NULL;
    //datos
    int dato, op, x;
    do {
        menu();
        cin >> op;
        switch (op) {
        case 1:
            cout << "\nNumero a encolar : ";
            cin >> dato;
            encolar(q, dato);
            cout << "\nNumero : " << dato << "\t[+] encolado\n"<<endl;
            break;
        case 2:
            x = desencolar(q);
            cout << "\nNumero : " << x << "\t[+} desencolado\n" << endl;
            break;
        case 3:
            cout << "\n Mostrar cola : " << endl;
            if (q.adelante != NULL) muestraCola(q);
            else cout << "[!] Cola vacia..." << endl;
            break;
        case 4:
            vaciarCola(q);
            cout << "[+] Cola Vacia" << endl;
            break;
        case 5:
            cout << "Hasta luego" << endl;
            break;
        default:
            cout << "\n\t[!] Opcion no valida ..." << endl;
            break;
        }
    } while (op != 5);
    return 0;
}
