//
// Created by TARS 2.0 on 25/03/23.
//

#ifndef ARBOL_BINARIO_ORDENADO_NODO_H
#define ARBOL_BINARIO_ORDENADO_NODO_H

class Nodo {
public:
    int dato;
    Nodo* izq;
    Nodo* der;
    Nodo(int dato);
};

#endif //ARBOL_BINARIO_ORDENADO_NODO_H
