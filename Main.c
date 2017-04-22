#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Brazo.h"

void main(){
    srand(timer(NULL));

    Nodo *nodo;
    ListaCC *lcc;
    ListaP *listap;
    Brazo *brazoA, *brazoB, *brazoC, *brazoD;
    char id1='A',id2='B', id3='C', id4='D';
    char tP1[10]="Puerta",tP2[10]="Toldo",tP3[10]="Cofre",tP4[10]="Rines";
    int i1=0, i2=0, i3=0,i4=0;
    int ran, boolBrazo, sacados;

    brazoA=nuevoBrazo(id1);
    brazoB=nuevoBrazo(id2);
    brazoC=nuevoBrazo(id3);
    brazoD=nuevoBrazo(id3);

    ///Creacion de piezas
    ran=rand()%4;
    switch(ran){//Se crean piezas de un brazo aleatorio
        case 0:
        boolBrazo=generaPieza(brazoA,i1);
        i1++;
        encolar(boolBrazo,brazoA,lcc);
            break;
        case 1:
        boolBrazo=generaPieza(brazoB,i2);
        i2++;
        encolar(boolBrazo,brazoB,lcc);
            break;
        case 2:
        boolBrazo=generaPieza(brazoC,i3);
        i3++;
        encolar(boolBrazo,brazoC,lcc);
            break;
        case 3:
        boolBrazo=generaPieza(brazoD,i4);
        i4++;
        encolar(boolBrazo,brazoD,lcc);
            break;
    }

    ///Pintado de piezas
    ran=rand()%2;
    if(ran==1){
        sacados=rand()%6;
            if(sacados>=LENCOLA){
               for(sacados=LENCOLA; sacados>0;sacados--){
               push(listap,)
               }
            }
            else{
                for(sacados;sacados>0;sacados--){

                }
            }
    }

}
