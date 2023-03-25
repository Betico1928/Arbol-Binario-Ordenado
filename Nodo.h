//
// Created by TARS 2.0 on 24/03/23.
//

#ifndef ARBOL_BINARIO_ORDENADO_NODO_H
#define ARBOL_BINARIO_ORDENADO_NODO_H


class Nodo{

public:
    // Funcion para saber si un nodo es hoja o no, SI apunta a los hijos pero no hay es porque es hoja y
    // retorna true, de lo contrario NO es hoja (porque tiene hijos) y retorna FALSE.
    bool elNodoEsHoja()
    {
        return hijoIzquierdo == nullptr && hijoDerecho == nullptr;
    }

    // Funcion para saber si ese nodo SOLO tiene 1 hijo
    // Si hijoIzquierdo es vacio PERO hijoDerecho no.
    // Si hijoDerecho es vacio PERO hijoIzquierdo no.
    bool tieneUnSoloHijo()
    {
        return (hijoIzquierdo == nullptr && hijoDerecho != nullptr) || (hijoDerecho == nullptr && hijoIzquierdo != nullptr);
    }




    // El dato que se desea meter/sacar del arbol
    int datoAAlmacenar;

    // Los punteros para apuntarle a los hijos (si hay) del nodo.
    Nodo *hijoIzquierdo;
    Nodo *hijoDerecho;
};


#endif //ARBOL_BINARIO_ORDENADO_NODO_H
