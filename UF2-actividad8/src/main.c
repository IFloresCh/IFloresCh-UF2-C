#include <stdio.h>
#include "function.h"

void main()
{
	long numero, potencia;
	printf("Introduce la base: ");
	scanf("%ld", &numero);
	printf("Introduce la potenia: ");
	scanf("%ld", &potencia);

    long elevadoAlCubo = potenciaRecursiva(numero, potencia);
    printf("Probando con recursividad. %ld elevado a %ld es %ld\n", numero, potencia, elevadoAlCubo);
    long elevadoConWhile = potenciaConWhile(numero, potencia);
    printf("Probando con while. %ld elevado a %ld es %ld\n", numero, potencia, elevadoAlCubo);
}