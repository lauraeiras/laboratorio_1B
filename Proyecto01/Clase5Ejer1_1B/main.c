#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 10

int main()
{
    //printf("Hola vectores 1B");
    int edad;
    int i;
    int edadesArray[TAMANIO]= {0,-1,2,4,10,-1,10,0,5,6};
    int edadMaxima;
    int edadMinima;
    int cantidadPares;
    int cantidadMaximos;
    int cantidadMinimos;
    int cantidadCeros;

    cantidadCeros=0;
    cantidadMinimos=0;
    cantidadMaximos=0;
    cantidadPares=0;

    //maximo 10
    for(i=0; i<TAMANIO; i++)

    {
        if(i==0 || edadesArray[i]>edadMaxima)
        {
            edadMaxima = edadesArray[i];

        }
    }
    printf("La edad maxima es : %d \n",edadMaxima);


   // cantidad de pares 5
    for(i=0; i<TAMANIO; i++)
    {
        if(edadesArray[i]%2==0 && edadesArray[i] != 0)
        {
            cantidadPares++;
        }

    }
    printf("La cantidad de numeros pares es : %d \n",cantidadPares);


    // cantidad de maximos 2
    for(i=0; i<TAMANIO; i++)
    {
        if(edadesArray[i] == edadMaxima)
        {
            cantidadMaximos++;
        }

    }
    printf("La cantidad de maximos es : %d \n ",cantidadMaximos);

    //minimo -1
    for(i=0; i<TAMANIO; i++)
    {

        if(i==0 || edadesArray[i]<edadMinima)
        {
            edadMinima = edadesArray[i];
        }


    }
    printf("La edad minima es : %d \n ",edadMinima);

    // cantidad de ceros 2
    for(i=0; i<TAMANIO; i++)
    {
        if(edadesArray[i] == 0)
        {
            cantidadCeros++;
        }

    }
    printf("La cantidad de ceros es : %d \n ",cantidadCeros);

    // cantidad de minimos 2
    for(i=0; i<TAMANIO; i++)
    {
        if(edadesArray[i] == edadMinima)
        {
            cantidadMinimos++;
        }

    }
    printf("La cantidad de minimos es : %d \n ",cantidadMinimos);

    return 0;
}
