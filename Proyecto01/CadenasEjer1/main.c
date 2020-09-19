#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Ejercicio
nombre: gERman ezequiel
apellido: scarafilo

apellidoNombre: Scarafilo, German Ezequiel*///Formato que debo lograr

int main()
{
    char nombre[20];//19
    char apellido[20];//19
    char apellidoNombre[41]="";//19+19+2+1=41/soluciones posibles asig "";
    int len;
    int i;

    printf("Ingrese nombre: ");
    fflush(stdin);
    //scanf("%[^\n]",nombre);
    gets(nombre);

    printf("Ingrese apellido: ");
    fflush(stdin);
    //scanf("%[^\n]",apellido);
    gets(apellido);


    //Concatenar cadenas
    strcat(apellidoNombre,apellido);
    strcat(apellidoNombre,", ");//concateno coma y espacio
    strcat(apellidoNombre,nombre);
    //printf("apellidoNombre: %s", apellidoNombre);

    len=strlen(apellidoNombre);
    apellidoNombre[0]=
    for(i=0;i<len;i++)
    {
        if(i==0)
        {
            apellidoNombre[i]=toupper(apellidoNombre[i]);
        }

    }

    puts(apellidoNombre);



}
//// Como documentar las funciones poner en el punto h funciones.h


    /** \brief// que hace la funcion //Convierte los valores de un array enteros a pares,siempre y cuando el valor sea multiplo de 5
     *
     * \param [] int el array de valores a converti
     * \param int la capacidad del array
     * \param char El sentido asciende desciende
     * \return int Si pudo hacer la conversion retorna 1 sino 0
     *
     */
    int funcionHacer(int [],int,char);

    */


