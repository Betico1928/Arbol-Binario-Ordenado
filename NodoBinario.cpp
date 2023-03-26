//
// Created by TARS 2.0 on 25/03/23.
//

#include "NodoBinario.h"

template < class T >
NodoBinario<T>::NodoBinario()
{
    this -> hijoIzquierdo = NULL;
    this -> hijoDerecho   = NULL;
}

template < class T >
NodoBinario<T>::NodoBinario(T valor)
{
    this -> hijoIzquierdo = NULL;
    this -> hijoDerecho   = NULL;
    this -> dato          = valor;
}


template < class T >
NodoBinario<T>::~NodoBinario()
{
    if (this -> hijoIzquierdo != NULL)
    {
        delete this -> hijoIzquierdo;
        this -> hijoIzquierdo = NULL;
    }
    if (this -> hijoDerecho != NULL)
    {
        delete this -> hijoDerecho;
        this -> hijoDerecho = NULL;
    }
}


template < class T >
T NodoBinario<T>::obtenerDato()
{
    return this -> dato;
}


template < class T >
void NodoBinario<T>::fijarDato(T valor)
{
    this -> dato = valor;
}


template < class T >
NodoBinario<T>* NodoBinario<T>::obtenerHijoIzquierdo()
{
    
}
