#include "function.h"

int cantidad(int i){
    int i;
    do{
        printf("Introduce la cantidad de números a introducir entre 1 y 50: ");
        scanf("%d", &i);
        if ( i > 50 || i < 1){
            printf("Introduce un numero correcto\n");
        }
    }while ( i > 50 || i < 1);

    return i;
}

int validate(int i){
    do{
        printf("Introduce un numero entre 0 y 10");
        scanf("%d",&i);
        if(i<0|| i>10){
            printf("introduce un valor correcto!\n");
    }
    }while (i < 0 || i >10);

    return i;
}   

void minmax() {
	int size, max = a[0], min = a[0];
 
	for (int i = 0; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
 
	printf("max is %d\n", max);
	printf("min is %d\n", min);
	system("pause");
	return 0;
}



//Demani per teclat la dimensió de l'array (nombre natural entre 1 i 50 inclosos)
//Demani per teclat tants nombres enters com dimensió indicada. Els valors han de ser entre 0 i 10 (inclosos)
//Mostri per pantalla:
//mitjana dels valors introduïts
//valor mínim i màxim introduïts a l'array
//array ordenat de manera ascendent
