/****************************************************************************************
Ejercicio:
Hacer un programa que pida un numero al usuario,despues una operacion(+ - / * )
despues que pida otro numero.Segun la operacion ingresada se llamara a la funcion
que ejecute la operacion(sumar() restar() dividir() multiplicar())
y luego mostrar el resultado. El mostrar resultado NOOOOOOOOO puede estar dentro de
las funciones que crean para hacer la operacion.Funcion dividir validar no dividir x 0

***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
//CREO LOS PROTOTIPOS
int sumar(int numero1,int numero2);
int restar(int numero1,int numero2);
int multiplicar(int numero1,int numero2);
float dividir(int numero1,int numero2);

int main()
{
    int primerNumero;
    int segundoNumero;
    char operacion;//Opcion de operacion
    int resultadoInt;//Enteros
    float resultadoFloat;//Solo division

    printf("Ingrese un numero: ");
    scanf("%d",&primerNumero);

    printf("Ingrese una operacio ");
    fflush(stdin);
    scanf("%c",&operacion);

    printf("Ingrese un numero: ");
    scanf("%d",&segundoNumero);

    switch(operacion)
    {
        case '+':
            resultadoInt=sumar(primerNumero,segundoNumero);
            break;
        case '-':
            resultadoInt=restar(primerNumero,segundoNumero);
            break;
        case '*':
            resultadoInt=multiplicar(primerNumero,segundoNumero);
            break;
        case '/':
            resultadoFloat=dividir(primerNumero,segundoNumero);
            break;
    }

    if(operacion != '/')
    {
        printf("El resultado es %d",resultadoInt);
    }
    else
    {
        printf("El resultado es %f ",resultadoFloat);
    }

    return 0;
}

//Desarrollo de funciones
int sumar(int numero1,int numero2)
{
    int resultado;
    resultado=numero1+numero2;

    return resultado;
}

int restar(int numero1,int numero2)
{
    int resultado;
    resultado=numero1-numero2;
    return resultado;
}

int multiplicar(int numero1,int numero2)
{
    int resultado;
    resultado=numero1*numero2;
    return resultado;
}

float dividir(int numero1,int numero2)
{
    float resultado;

    if(numero2 != 0)
       {
           resultado=numero1/numero2;
       }
       else
       {
           //NO SE PUEDE MOSTRAR UN MENSAJE DE ERROR EN LA FUNCION
           //POR EL MOMENTO NO TENGO LA SOLUCION CORRECTA.......
           //BUSCAR LA MANERA PARA QUE LA FUNCION DEVUELVA DOS VALORES
           printf("Error no se puede dividir por cero \n");
       }
       return resultado;
}
