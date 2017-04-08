#include "Brazo.h"
#include <stdio.h>
#include <stdlib.h>

Pieza *creaPieza(){
    Pieza *nueva=(Pieza *)malloc(sizeof(Pieza));
    nueva->descripcion=(char *)malloc(MAXCHAR*sizeof(char));
    nueva->iD=nueva->color=0;
    return nueva;
}

Nodo *nuevoNodo(){
    Nodo *nuevo=(Nodo *)malloc(sizeof(Nodo));
    nuevo->pieza=creaPieza();
    nuevo->sig=NULL;
    return nuevo;
}

ListaCC *nuevaListaColaCircular(){
    ListaCC *nueva=(ListaCC *)malloc(sizeof(ListaCC));
    nueva->h=nueva->t=NULL;
    return nueva;
}

ListaP *nuevaListaPila(){
    ListaP *nueva=(ListaP *)malloc(sizeof(ListaP));
    nueva->tope=NULL;
    return nueva;
}

ProductoFinal *nuevoProducto(){
    ProductoFinal *nuevo=(ProductoFinal *)malloc(sizeof(ProductoFinal));
    nuevo->iDConsecutivo=0;
    return nuevo;
}

Brazo *nuevoBrazo(){
    Brazo *nuevo=(Brazo *)malloc(sizeof(Brazo));
    nuevo->colaBrazo=nuevaListaColaCircular();
    return nuevo;
}
