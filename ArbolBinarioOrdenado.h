//
// Created by TARS 2.0 on 25/03/23.
//

#ifndef ARBOLBINARIOORDENADO_H
#define ARBOLBINARIOORDENADO_H
#include "Nodo.h"

class ArbolBinarioOrdenado{

private:
    Nodo* raiz;
    Nodo* insertar(Nodo* nodo, int dato);
    Nodo* buscar(Nodo* nodo, int dato);
    Nodo* eliminar(Nodo* nodo, int dato);
    void preOrder(Nodo* nodo);
    void inOrder(Nodo* nodo);
    void postOrder(Nodo* nodo);


public:
    ArbolBinarioOrdenado();     // Constructor
    //~ArbolBinarioOrdenado();    // Destructor
    void insertar(int dato);    // Inserta un valor en el arbol.
    void eliminar(int dato);    // Elimina un valor en el arbol.
    bool buscar(int dato);      // Busca un dato en el arbol.
    void imprimirPreOrder();    // Imprime el arbol en preOrder.
    void imprimirInOrder();     // Imprime el arbol en inOrder.
    void imprimirPostOrder();   // Imprime el arbol en postOrder
};

#endif //ARBOLBINARIOORDENADO_H
