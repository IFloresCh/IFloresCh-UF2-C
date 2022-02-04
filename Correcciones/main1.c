//https://github.com/ShiroSB/C-UF2/blob/main/act%2011

#include <stdio.h>
#define SIZE 100
void evenNumbers();

void main(){
    printf("100 números pares generados proceduralmente:\n");
    evenNumbers();
   
}

void evenNumbers(){
    int j=1,i=0,pares[SIZE];
    for (i=0;i<=SIZE+1;i++){
           pares[i]=j*2;
           j++;
    }
    
    for (i=0;i<=SIZE;i++){
        printf("%d ",pares[i]);
    
    }
}
