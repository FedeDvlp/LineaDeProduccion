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

Brazo *nuevoBrazo(char id){
    Brazo *nuevo=(Brazo *)malloc(sizeof(Brazo));
    nuevo->colaBrazo=nuevaListaColaCircular();
    nuevo->tipoPieza=(char *)malloc(MAXCHAR*sizeof(char));
    nuevo->identificador=id;
    return nuevo;
}

int generaPieza(Brazo *brazo, int ident){
    int r;
    srand(time(NULL));
    r=rand()%2;
    Nodo *nuevo;
    if(r==1){//Si genera
        nuevo=nuevoNodo();
        nuevo->pieza->iD=ident;
        nuevo->pieza->brazo=brazo->identificador;
        nuevo->pieza->color=rand()%4;
        nuevo->pieza->descripcion=brazo->tipoPieza;
        insertarLCC(brazo->colaBrazo,nuevo);
        return 1;
    }
    return 0;
}

void encolar(int boolBrazo, Brazo *brazo, ListaCC *listacc){
    srand(time(NULL));
    if(boolBrazo==1){//Pasa una pieza de las colas individuales de cada brazo a la cola circular general
        if((rand()&2)==1){
        insertarLCC(listacc,borrar(listacc));
        }
    }
}
