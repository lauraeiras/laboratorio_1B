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
    int resta;
    float division;
    int multiplicacion;

    printf("Ingrese primer numero: ");
    scanf("%d",&primerNumero);

    printf("Ingrese segundo numero: ");
    scanf("%d",&segundoNumero);

    suma=primerNumero+segundoNumero;
    resta=primerNumero-segundoNumero;
    division=(float)primerNumero/segundoNumero;
    multiplicacion=primerNumero*segundoNumero;

    printf("La suma es %d \n",suma);
    printf("La resta es %d \n",resta);
    printf("La division es %f \n",division);//
    printf("La multiplicacion es %d \n",multiplicacion);

    return 0;
}
