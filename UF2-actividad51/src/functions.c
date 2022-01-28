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

void modifyData(struct biblio *o,int size){ //punter a office
    for(int i=0; i<size;i++){
        printf("Introduce el titulo del libro: \n");
        scanf("%s",o[i].titulo);
        printf("Introduce el autor del libro \n");
        scanf("%s",o[i].autor);
        printf("Introduce la editorial del libro: \n");
        scanf("%s",o[i].editorial);
//        printf("Introduce la cantidad disponible del libro: \n");
//        scanf("%d",o[i].disp);
        printf("Año de publicacion: \n");
        scanf("%d",o[i].data);
        printf("Nombre de  usuario que le ha cogido en préstamo:   \n");
        scanf("%s",&o[i].usuario_p);
        printf("Cuantos dias en prestamo: \n");
        scanf("%d",&o[i].dias_p);
    }
}

void printData(struct biblio *o, int size){
    printf("------------------------------------------------\n");
    for(int i=0; i<size; i++){
        printf("Estos son los datos del libro: [%d]\n", i+1);
        printf("Titulo del libro: %s\n", o[i].titulo);
        printf("Autor del libro: %s\n"),o[i].autor;
        printf("Editorial del libro: %s\n",o[i].editorial);
        printf("Año de publicacion: %d\n",o[i].data);
        printf("Unidades disponibles: %d\n",o[i].disp);
        printf("Usuario en prestamo: %s\n",o[i].usuario_p);
        printf("Tiempo de prestamo: %d\n",o[i].dias_p);
        printf("------------------------------------------\n");
    }
}