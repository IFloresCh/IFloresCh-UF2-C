#include "function.h"

int cantidad(){
    int i, size;
    do{
        printf("Introduce la cantidad de");
        scanf("%d", &i);
    }while ( i > 50 || i < 1);
    return size;
}

int validate(){
    int n, i, size;
    size=cantidad(size);
    do{
        for(i=0; i < size;i++);
            printf("Introduce un numero entre 0 y 10");
            scanf("%d", &n);

    }while (n < 0 || n >10);
    if (n < 0 || n > 10){
        printf("Introduce un número correcto");
    }
}


//Demani per teclat la dimensió de l'array (nombre natural entre 1 i 50 inclosos)
//Demani per teclat tants nombres enters com dimensió indicada. Els valors han de ser entre 0 i 10 (inclosos)
//Mostri per pantalla:
//mitjana dels valors introduïts
//valor mínim i màxim introduïts a l'array
//array ordenat de manera ascendent
