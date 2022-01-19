#include "function.h"
int validacion(){
    float n, m_apr, m_rep;
    int q_apr, q_rep;

    do{
        printf("introduce una nota: ");
        scanf("%.2f", &n);
    }while(n > 10 || n < 0);

}
int