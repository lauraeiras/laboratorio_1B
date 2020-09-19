#include <stdio.h>
#include <stdlib.h>

void duplicarNumero(int* p);

int main()
{
    int num = 5;

    printf("Antes de la funcion num vale : %d\n", num);

    duplicarNumero(&num);

   printf("Despues de la funcion num vale : %d\n", num);

    return 0;
}

void duplicarNumero(int* p)
{
  //10 = 5 * 2
    *p = *p * 2;
    //int valor;
    //valor = *p;

    //printf("En main num vale : %d\n", *p);

}
