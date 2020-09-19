/******************************************************************************

Funciones a realizar
1-la suma acumulada X
2-la mayor edad X
3-la menor edad X
4-la cantidad de mayor edad repetida o no.
5-la cantidad de menor edad repetida o no.
6-El promedio


*******************************************************************************/
#include <stdio.h>
#include "funcionesArrays.h"
#define TAMANIO 10
//arrays/vector/se recorre un array con for
int main()
{
//printf("Hola vectores 1B");


    int i;
    int edadesArray[TAMANIO]={0,-1,2,4,10,-1,10,0,5,6};
    int sumaDeEdades;
    int edadMayor;
    int edadMenor;
    int valoresRepetidos;
    float promedio;

    edadMayor=0;
    edadMenor=0;
    valoresRepetidos=0;


    sumaDeEdades=SacarLaSuma(edadesArray,TAMANIO);
    edadMayor=SacarMaximo(edadesArray,TAMANIO);
    edadMenor=SacarMinimo(edadesArray,TAMANIO);
    valoresRepetidos=SacarRepetidos(edadesArray,TAMANIO);
    promedio=SacarPromedio(edadesArray,TAMANIO);




    printf("\nLa suma de las edades es :%d",sumaDeEdades);
    printf("\nLa edad maxima es :%d",edadMayor);
    printf("\nLa edad minima es :%d",edadMenor);
    printf("\nLa cantidad de mayor edad repetida o no :%d",valoresRepetidos);
    printf("\nEl promedio de edades es: %f",promedio);
    return 0;

}
