/******************************************************************************

Funciones a realizar
1-la suma acumulada
2-la mayor edad
3-la menor edad
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
printf("Hola vectores 1B");
    int edad;
    int i;
    int edadesArray[TAMANIO]={0,-1,2,4,10,-1,10,0,5,6};
    int sumaDeEdades;
    int edadMaxima=0;
    int edadMinima=0;


    sumaDeEdades=SacarLaSuma(edadesArray,TAMANIO);



    printf("\nla suma de las edades es :%d",sumaDeEdades);

    return 0;

}
