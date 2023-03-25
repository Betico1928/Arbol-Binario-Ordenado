//
// Created by TARS 2.0 on 25/03/23.
//

#ifndef ARBOL_BINARIO_ORDENADO_ARBOLBINARIOORDENADO_H
#define ARBOL_BINARIO_ORDENADO_ARBOLBINARIOORDENADO_H


class ArbolBinarioOrdenado{

public:  // Para ser accedidas fuera de la clase.
    ArbolBinarioOrdenado(); // Constructor
    ~ArbolBinarioOrdenado(); // Destructor

    void insertarDato (int datoAInsertar); // Inserta un valor en el arbol.
    bool buscarDato   (int datoABuscar);   // Busca un valor en el arbol.
    void eliminarDato (int datoAEliminar); // Elimina un valor en el arbol.

    void imprimirEnPreOrder();  // Imprime el arbol en preOrder.
    void imprimirEnInOrder();   // Imprime el arbol en inOrder.
    void imprimirEnPostOrder(); // Imprime el arbol en postOrder

private:
    struct Nodo
    {
        int dato;

        // Los punteros para apuntarle a los hijos (si hay) del nodo.
        Nodo *hijoIzquierdo;
        Nodo *hijoDerecho;
    };

    Nodo* raiz; // Apunta a la raiz del arbol

    void insertarDato(Nodo* nodo, int valor);   // Función auxiliar para insertar
    bool buscarDato(Nodo* nodo, int valor);     // Función auxiliar para buscar
    Nodo* eliminarDato(Nodo* nodo, int valor);  // Función auxiliar para eliminar
    void imprimirEnPreOrder(Nodo* nodo);        // Función auxiliar para imprimir en preorder
    void imprimirEnInOrder(Nodo* nodo);         // Función auxiliar para imprimir en inorder
    void imprimirEnPostOrder(Nodo* nodo);       // Función auxiliar para imprimir en postorder
    void destruirArbol(Nodo* nodo);             // Función auxiliar para destruir el árbol
};

#endif //ARBOL_BINARIO_ORDENADO_ARBOLBINARIOORDENADO_H
