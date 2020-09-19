#include <stdio.h>
#include <stdlib.h>

int main()
{
    //array de tipo int de cantidad 10
    int listaNumero[5];
    int i;
    int acumulador;

    acumulador=0;


    // como recorrer el array
    //carga secuencial
    for(i=0;i<5;i++)
    {
        printf("Ingreses unn numero:  ");
        scanf("%d", &listaNumero[i]);
    }


    //Mostrar el vector
    for(i=0;i<5;i++)
    {
        printf("%d-",listaNumero[i]);
    }
    //Sumar los elementos del vector
    for(i=0;i<5;i++)
    {
        acumulador+=listaNumero[i];
    }
    printf("El acumulado es : %d", acumulador);
    return 0;
}
