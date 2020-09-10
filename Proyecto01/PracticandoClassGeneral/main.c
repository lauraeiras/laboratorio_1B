/************************************************************************
Ejercicio:
Pedir dos numeros e imprimir la suma,resta,
division y multiplicacion.
**********************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerNumero;
    int segundoNumero;
    int suma;

    printf("Ingrese primer numero: ");
    scanf("%d",&primerNumero);

    printf("Ingrese segundo numero: ");
    scanf("%d",&segundoNumero);

    suma=primerNumero+segundoNumero;

    printf("La suma es %d ",suma);

    return 0;
}
