#include <iostream>
struct Nodo{
	int dato;
	struct nodo *izquierda;
	struct nodo *derecha;
};
Nodo *crearNodo (int);
void insertar (Nodo *&, int);
Nodo *arbol = NULL;
int main (){
	insertar (arbol, 7);
	insertar (arbol, 4);
	insertar (arbol, 2);
	insertar (arbol, 5);
	insertar (arbol, 9);
	return 0;
}

// Funcion para crear un nuevo nodo
Nodo *crearNodo (int valor){
	Nodo *nuevo = new Nodo();
	nuevo->dato = valor;
	nuevo->derecha = NULL;
	nuevo->izquierda = NULL;
	return nuevo;
	
}

// Funcion para insertar valor del nodo
void insertar (Nodo *&arbol, int n){
	if(arbol==NULL) {
		Nodo *nuevo = crearNodo(n);
		arbol = nuevo;
	} else {
		int valorRaiz = arbol->dato;
		if (n < valorRaiz){
			insertar(arbol->izquierda,n);
		} else {
			insertar(arbol->derecha,n);
		}
	}
}
