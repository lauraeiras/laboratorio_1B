#include <stdio.h>
#include <stdlib.h>


int main()
{
   int a;
   int b;
   int c;
   char o;
   float f;
   int direccion;

   //Para saber el tamaño de las variables
   //Se muestra con %d,porque devuelve la cantidad que ocupa de bytes
   //Depende el procesador son estos valores.
   printf("el size de A es :%d\n",sizeof(a));
   printf("el size de B es :%d\n",sizeof(b));
   printf("el size de C es :%d\n",sizeof(c));
   printf("el size de O es :%d\n",sizeof(o));
   printf("el size de F es :%d\n",sizeof(f));


   //Direccion de memoria donde se encuentran las variables
   //%p muestra en hexadecimal
   printf("La direccion de B es :%p\n",&b);
   printf("La direccion de C es :%p\n",&c);
   printf("La direccion de O es :%p\n",&o);
   printf("La direccion de F es :%p\n",&f);

   //Puedo guardar la direccion de una variable en otra variable porque son numeros
   direccion=&a;
   printf("La direccion de A es :%d\n",&a);
   printf("La direccion de A es :%d\n",direccion);



    return 0;
}
