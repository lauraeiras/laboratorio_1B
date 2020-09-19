#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 20;

    int* p;

    p = &x;     //puntero que apunta a x

    // p es la direccion de memoria de x
    // *p es el valor guardado en la direccion de memoria

    *p=30;  //x=30; escribir 30 en la posicion de memoria


    printf("x vale : %d\n", x);    // &x mostrame direccion de memoria como puntero
    return 0;
}
