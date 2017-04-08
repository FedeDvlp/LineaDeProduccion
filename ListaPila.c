int vacia(ListaP pila){
 return(pila.tope==NULL);
}

void push(ListaP *pila, Nodo *nodo){
    nodo->sig=pila->tope;
    pila->tope=nodo;
}

Nodo *pop(ListaP *pila){
    Nodo *ret=pila->tope;
    pila->tope=pila->tope->sig;
    return ret;
}

void listarP(ListaP pila){
    Nodo *aux=pila.tope;
    if(!vacia(pila)){
        while(aux!=NULL){
            printf("ID: %c%i\n",aux->pieza->brazo,aux->pieza->iD);
            printf("Color: %s\n",arregloColor[aux->pieza->color]);
            printf("Descripcion: %s\n",aux->pieza->descripcion);
            aux=aux->sig;
        }
    }
    else
        printf("No hay piezas\n");
}
