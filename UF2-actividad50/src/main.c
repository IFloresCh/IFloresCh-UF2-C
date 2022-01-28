#include <stdio.h>
#include "function.h"

void main() {
    int size;
    size = validate();
    struct office bcn[size];
    modifyData(bcn, size);//per referència només l’array, no size
    printData(bcn, size); //es passa per valor
}
