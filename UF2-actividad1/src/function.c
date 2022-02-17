
#include "function.h"

int validate(){
   int n,i=0;
   
   do{
      
        printf("introduce u numero entre 10 y 5000");
        scanf("%d",&n);
        i++;
       
   }while(n>5000 || n< 10 && i <3);
   if(i==3){
       
       printf("Adios!\n ");
   }else {
       
        printf("Es un número válido");
   }
}