//
// Created by TARS 2.0 on 25/03/23.
//

#include "ArbolBinarioOrdenado.h"
#include "Nodo.h"
#include <iostream>

using namespace std;

ArbolBinarioOrdenado::ArbolBinarioOrdenado()
{
    this->raiz = NULL;
}


Nodo* ArbolBinarioOrdenado::insertar(Nodo* nodo, int dato)
{
    if (nodo == NULL)
    {
        Nodo* nuevoNodo = new Nodo(dato);
        return nuevoNodo;
    }

    if (dato < nodo->dato)
    {
        nodo->izq = insertar(nodo->izq, dato);
    }
    else if (dato > nodo->dato)
    {
        nodo->der = insertar(nodo->der, dato);
    }

    return nodo;
}

void ArbolBinarioOrdenado::insertar(int dato)
{
    this->raiz = insertar(this->raiz, dato);
}



Nodo* ArbolBinarioOrdenado::buscar(Nodo* nodo, int dato)
{
    if (nodo == NULL)
    {
        return NULL;
    }
    if (dato == nodo->dato)
    {
        return nodo;
    }
    else if (dato < nodo->dato)
    {
        return buscar(nodo->izq, dato);
    }
    else
    {
        return buscar(nodo->der, dato);
    }
}

bool ArbolBinarioOrdenado::buscar(int dato)
{
    Nodo* nodoEncontrado = buscar(this->raiz, dato);
    if (nodoEncontrado == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}



Nodo* ArbolBinarioOrdenado::eliminar(Nodo* nodo, int dato) {
    if (nodo == NULL) {
        return NULL;
    }
    if (dato == nodo->dato) {
        if (nodo->izq == NULL && nodo->der == NULL) {
            delete nodo;
            return NULL;
        } else if (nodo->izq == NULL) {
            Nodo* temp = nodo->der;
            delete nodo;
            return temp;
        } else if (nodo->der == NULL) {
            Nodo* temp = nodo->izq;
            delete nodo;
            return temp;
        } else {
            Nodo* temp = nodo->der;
            while (temp->izq != NULL) {
                temp = temp->izq;
            }
            nodo->dato = temp->dato;
            nodo->der = eliminar(nodo->der, temp->dato);
        }
    } else if (dato < nodo->dato) {
        nodo->izq = eliminar(nodo->izq, dato);
    } else {
        nodo->der = eliminar(nodo->der, dato);
    }
    return nodo;
}

void ArbolBinarioOrdenado::eliminar(int dato) {
    this->raiz = eliminar(this->raiz, dato);
}

void ArbolBinarioOrdenado::preOrder(Nodo* nodo) {
    if (nodo == NULL) {
        return;
    }
    cout << nodo->dato << " ";
    preOrder(nodo->izq);
    preOrder(nodo->der);
}

void ArbolBinarioOrdenado::imprimirPreOrder()
{
    preOrder(this->raiz);
    cout << endl;
}

void ArbolBinarioOrdenado::inOrder(Nodo* nodo) {
    if (nodo == NULL) {
        return;
    }
    inOrder(nodo->izq);
    cout << nodo->dato << " ";
    inOrder(nodo->der);
}

void ArbolBinarioOrdenado::imprimirInOrder() {
    inOrder(this->raiz);
    cout << endl;
}

void ArbolBinarioOrdenado::postOrder(Nodo* nodo) {
    if (nodo == NULL) {
        return;
    }
    postOrder(nodo->izq);
    postOrder(nodo->der);
    cout << nodo->dato << " ";
}

void ArbolBinarioOrdenado::imprimirPostOrder() {
    postOrder(this->raiz);
    cout << endl;
}








/*
#include "ArbolBinarioOrdenado.h"
#include "Nodo.h"
#include <iostream>

using namespace std;

// Constructor
ArbolBinarioOrdenado::ArbolBinarioOrdenado() {
    raiz = nullptr;
}

// Destructor
ArbolBinarioOrdenado::~ArbolBinarioOrdenado()
{
    destruirNodos(raiz);
}

// Funciones auxiliares
void ArbolBinarioOrdenado::destruirNodos(Nodo* nodo)
{
    if (nodo != nullptr)
    {
        destruirNodos(nodo->hijoIzquierda);
        destruirNodos(nodo->hijoDerecha);
        delete nodo;
    }
}

Nodo* ArbolBinarioOrdenado::insertarDato(Nodo* nodo, int valor)
{
    if (nodo == nullptr)
    {
        return new Nodo(valor);
    }

    if (valor < nodo->valor)
    {
        nodo->hijoIzquierda = insertarDato(nodo->hijoIzquierda, valor);
    }
    else
    {
        nodo->hijoDerecha = insertarDato(nodo->hijoDerecha, valor);
    }

    return nodo;
}

Nodo* ArbolBinarioOrdenado::buscarDato(Nodo* nodo, int valor) {
    if (nodo == nullptr || nodo->valor == valor) {
        return nodo;
    }
    if (valor < nodo->valor) {
        return buscarDato(nodo->hijoIzquierda, valor);
    }
    return buscarNodo(nodo->derecha, valor);
}

void ArbolBinarioOrdenado::imprimirEnPreOrder(Nodo* nodo)
{
    if (nodo == nullptr)
    {
        return;
    }

    cout << nodo->valor << endl;
    imprimirEnPreOrder (nodo -> hijoIzquierda);
    imprimirEnPreOrder (nodo -> hijoDerecha);
}


void ArbolBinarioOrdenado::imprimirEnInOrder(Nodo* nodo) {
    if (nodo == nullptr)
    {
        return;
    }

    imprimirEnInOrder (nodo -> hijoIzquierda);
    cout << nodo->valor << endl;
    imprimirEnInOrder(nodo -> hijoDerecha);
}

void ArbolBinarioOrdenado::imprimirEnPostOrder(Nodo* nodo) {
    if (nodo == nullptr)
    {
        return;
    }
    imprimirEnPostOrder(nodo->hijoIzquierda);
    imprimirEnPostOrder(nodo->hijoDerecha);
    cout << nodo

 */