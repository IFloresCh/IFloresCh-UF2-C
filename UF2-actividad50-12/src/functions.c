
#include <stdio.h>
#include "functions.h"

int validate(){
    int num;
    do{
        printf("Cuantos libros vas a registrar?\n");
        scanf("%d", &num);
    }while(num<1);
    return num;
}

