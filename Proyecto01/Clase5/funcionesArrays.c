#include "funcionesArrays.h"

int SacarLaSuma(int unArray[],int cantidad)
{
    int retornoSuma=0;
    int i;
    for(i=0;i<cantidad;i++)
    {
        retornoSuma=retornoSuma+unArray[i];
    }
    return retornoSuma;

}
int SacarMaximo(int unArray[],int cantidad)
{
    int i;
    int edadMaxima=0;

     for(i=0;i<cantidad;i++)
     {
         if(i==0)
         {
            edadMaxima=unArray[i];
         }
         if(unArray[i]>edadMaxima)
         {
            edadMaxima=unArray[i];
         }

     }

     return edadMaxima;

}
int SacarMinimo(int unArray[],int cantidad)
{
     int i;
     int edadMinima=0;
     for(i=0;i<cantidad;i++)
     {
         if(i==0)
         {
            edadMinima=unArray[i];
         }
         if(unArray[i]<edadMinima)
         {
            edadMinima=unArray[i];
         }

     }

     return edadMinima;


}

int SacarRepetidos(int unArray[],int cantidad,int valorRepetido)
{
    int i;
    int contadorRepetidos=0;

    for(i=0;i<cantidad;i++)
    {
        if(unArray[i]==valorRepetido)
        {
            contadorRepetidos++;
        }

    }
    return contadorRepetidos;
}
float SacarPromedio(SacarLaSuma(int unArray,int cantidad),int cantidad)
{
    float resultadoPromedio;
    resultadoPromedio=(float)SacarLaSuma(int unArray,int cantidad)/cantidad;
    return resultadoPromedio;

}


