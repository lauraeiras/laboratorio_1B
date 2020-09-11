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
int sacarMaximo(int unArray[],int cantidad,int edadMaxima)
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
int sacarMinimo(int unArray[],int cantidad,int edadMinima)
{


}
