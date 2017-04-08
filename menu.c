#include <stdio.h>
//#include "Brazo.h"


//============================================
int Menu (char texto[], int n) { //n es el numero maximo de opciones del menu.
   int opcion;
   do {
       printf("%s ",texto);
       do{
           fflush(stdin);
           if(scanf("%d", &opcion) != 1){
            printf("Error en la entrada, elije una opcion\n");
            continue;
           }
           break;
           } while(1);
           if (opcion < 1 || opcion > n)
            printf("Error: Opci%cn no v%clida...\n", 162, 160);

    } while (opcion < 1 || opcion > n);

   return opcion;
}
//=================================================
