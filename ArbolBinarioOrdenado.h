//
// Created by TARS 2.0 on 25/03/23.
//

#ifndef ARBOL_BINARIO_ORDENADO_ARBOLBINARIOORDENADO_H
#define ARBOL_BINARIO_ORDENADO_ARBOLBINARIOORDENADO_H

#include "NodoBinario.h"

template < class T >
class ArbolBinarioOrdenado {
protected:
    NodoBinario <T>* raiz;

public:
    ArbolBinarioOrdenado();         // Constructor.
    ~ArbolBinarioOrdenado();        // Destructor.
    bool esVacio();                 // El arbol está vacio (sin datos).
    T datoRaiz();                   // El dato de la raiz del arbol.
    int alturaDelArbol();           // La altura que tiene el arbol.
    int tamanoDelArbol();           // El tamaño que tiene el arbol.
    bool insertarValor(T valor);    // Inserta un dato en el arbol.
    bool eliminarValor(T valor);    // Elimina un dato del arbol.
    bool buscarValor(T valor);      // Busca un dato en el arbol.

    void imprimirPreOrder();        // Imprime en preOrder.
    void imprimirInOrder();         // Imprime en inOrder.
    void imprimirPosOrder();        // Imprime en PosOrder.
    void imprimirPorNiveles();      // Imprime por niveles.
};

#include "ArbolBinarioOrdenado.h"

#endif //ARBOL_BINARIO_ORDENADO_ARBOLBINARIOORDENADO_H
