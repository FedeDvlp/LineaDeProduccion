#include <stdio.h>
#include <stdlib.h>


void insertarLCC(ListaCC *cola, Nodo *nodo){
    if(vacia(*cola)){
        cola->h=nodo;
        cola->t=nodo;
        cola->t->sig=cola->h;
        return;
    }
    cola->t->sig=nodo;
    cola->t=nodo;
}

void listarLCC(ListaCC cola){
    Nodo *ret=cola.h;
    if(ret!=NULL){
        printf("%i\n",ret->pieza);
        ret=ret->sig;
    }
    else
        printf("No hay datos\n");
}

Nodo *borrar(ListaCC *cola){
    Nodo *ret=NULL;
    if(!vacia(*cola)){
        ret=cola->h;
        if(cola->h==cola->t)
            cola->h=cola->t=NULL;
        else{
            cola->h=cola->h->sig;
            cola->t->sig=cola->h;
            }
    }
    return ret;
}

int vacia(ListaCC cola){
    return(cola.h==NULL);
}
