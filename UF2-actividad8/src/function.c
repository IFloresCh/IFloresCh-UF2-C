#include <stdio.h>

long potenciaRecursiva(long numero, long potencia)
{
    if (potencia <= 0)
    {
        return 1;
    }
    else
    {
        return numero * potenciaRecursiva(numero, potencia - 1);
    }
}

long potenciaConWhile(long numero, long potencia)
{
    long resultado = numero;
    while (potencia > 1)
    {
        resultado = resultado * numero;
        potencia--;
    }
    return resultado;
}