#ifndef BRAZO_H_INCLUDED
#define BRAZO_H_INCLUDED

#define MAXPIEZA 4
#define MAXCHAR 50

typedef struct pieza Pieza;
typedef struct nodo Nodo;
typedef struct listaColaCircular ListaCC;
typedef struct brazoM Brazo;
typedef struct producto ProductoFinal;
typedef struct listaPila ListaP;

struct pieza{
    int iD;
    char brazo;
    int color;
    char *descripcion;
};

struct nodo{
    Pieza *pieza;
    Nodo *sig;
};

struct listaColaCircular{
    Nodo *h;
    Nodo *t;
};

struct listaPila{
    Nodo *tope;
};

struct brazoM{
    char identificador;
    ListaCC *colaBrazo;
    char *tipoPieza;
};

struct producto{
    int iDConsecutivo;
    Pieza piezas[MAXPIEZA];
};


///Funciones para asignaciones de memoria
Pieza *creaPieza();
Nodo *nuevoNodo();
ListaCC *nuevaListaColaCircular();
ListaP *nuevaListaPila();
ProductoFinal *nuevoProducto();
Brazo *nuevoBrazo(char id);
///Funciones para manejo de estructuras
void insertarLCC(ListaCC *cola, Nodo *nodo);
void listarLCC(ListaCC cola);
Nodo *borrar(ListaCC *cola);
int vaciaCC(ListaCC cola);

int vaciaLP(ListaP pila);
void push(ListaP *pila, Nodo *nodo);
Nodo *pop(ListaP *pila);
void listarP(ListaP pila);

#endif // COLA_H_INCLUDED

