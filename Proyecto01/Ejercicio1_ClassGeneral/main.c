#include <stdio.h>
#include <stdlib.h>
/**************************************************************************
Ejercicio:
Realizar un programa que solicite cinco números e imprima por pantalla
 el promedio, el máximo y el mínimo.
**************************************************************************/
int main()
{
    int numero;
    int maximo;
    int minimo;
    float promedio;
    int acumulador;
    int i;

    //solicito primer numero y ya asigno max y min.en esta iteracion
    printf("Ingrese un numero: ");
    scanf("%d",&numero);//tipo de dato,puntero a variable=&
    maximo=numero;
    minimo=numero;
    acumulador=numero;//acumulo primer numero.

    for(i=0;i<4;i++)//va a pedir los 4 num restantes
    {
        //pido numeros restantes
        printf("Ingrese un numero: ");
        scanf("%d",&numero);
        acumulador=acumulador+numero;

        if(numero>maximo)
        {
            maximo=numero;
        }
        if(numero<minimo)
        {
            minimo=numero;
        }
    }
    promedio=(float) acumulador/5;

    printf("El numero maximo es: %d\n",maximo);
    printf("El numero maximo es: %d\n",minimo);
    printf("El promedio es: %f\n",promedio);

    return 0;
}
