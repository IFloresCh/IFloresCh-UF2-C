
#include "function.h"

int validate(){
   int n,i=0;
   
   do{
      
        printf("introduce the number between 10 and 5000");
        scanf("%d",&n);
        i++;
       
   }while(n>5000 || n< 10 && i <3);
   if(i==3){
       
       printf("Introduce un número correcto\n ");
   }else {
       
        printf("Es un número válido");
   }
}