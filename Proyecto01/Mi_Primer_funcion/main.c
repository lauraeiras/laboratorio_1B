#include <stdio.h>
#include <stdlib.h>


int sumarNumeros(int primerNumero,int segundoNumero);//prototipo
int main()
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese primer numero: ");
    scanf("%d",&numeroUno);
    printf("Ingrese primer numero :");
    scanf("%d",&numeroDos);

    //Invocacion de mi funcion
    suma=sumarNumeros(numeroUno,numeroDos);
    printf("La suma es %d",suma);



    return 0;
}

//Funciones auxiliares de mi funcion
//Tipo Nombre Funcion (Tipo Nombre Argumento....)
int sumarNumeros(int primerNumero,int segundoNumero)//Desarrollo de mi funcion
{
    int resultado;
    resultado=primerNumero+segundoNumero;

    return resultado;
}

