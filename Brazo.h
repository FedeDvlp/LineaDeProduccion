#define MAXPIEZA 4
#define MAXCHAR 50

typedef brazoM Brazo;
typedef pieza Pieza;
typedef producto ProductoFinal;
typedef nodo Nodo;
typedef listaColaCircular ListaCC;
typedef listaPila ListaP;

struct{
    Nodo *h;
    Nodo *t;
}listaColaCircular;

struct{
    Nodo *tope
}listaPila;

struct{
    Pieza *pieza;
    Nodo *sig;
}nodo;

struct{
    char identificador;
    ListaCC *colaBrazo;
}brazoM;

struct{
    int iD;
    char brazo;
    int color;
    char *descripcion;
}pieza;

struct{
    int iDConsecutivo;
    Pieza piezas[MAXPIEZA];
}producto;

///Funciones para asignaciones de memoria
Pieza *creaPieza();
Nodo *nuevoNodo();
ListaCC *nuevaListaColaCircular();
ListaP *nuevaListaPila();
ProductoFinal *nuevoProducto();
Brazo *nuevoBrazo();
///Funciones para manejo de estructuras
void insertarLCC(ListaCC *cola, Nodo *nodo);
void listarLCC(ListaCC cola);
Nodo *borrar(ListaCC *cola);
int vacia(ListaCC cola);

int vacia(ListaP pila);
void push(ListaP *pila, Nodo *nodo);
Nodo *pop(ListaP *pila);
void listarP(ListaP pila);


