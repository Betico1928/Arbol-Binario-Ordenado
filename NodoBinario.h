//
// Created by TARS 2.0 on 25/03/23.
//

#ifndef ARBOL_BINARIO_ORDENADO_NODOBINARIO_H
#define ARBOL_BINARIO_ORDENADO_NODOBINARIO_H

template < class T >
class NodoBinario {
protected:
    T dato;
    NodoBinario<T>* hijoIzquierdo;
    NodoBinario<T>* hijoDerecho;

public:
    NodoBinario();
    NodoBinario(T valor);
    ~NodoBinario();
    T obtenerDato();
    void fijarDato(T valor);
    NodoBinario<T>* obtenerHijoIzquierdo();
    NodoBinario<T>* obtenerHijoDerecho();
    void fijarHijoIzquierdo (NodoBinario<T>* izquierdo);
    void fijarHijoDerecho (NodoBinario<T>* derecho);
    bool esHoja;
};

#include "NodoBinario.h"

#endif //ARBOL_BINARIO_ORDENADO_NODOBINARIO_H
