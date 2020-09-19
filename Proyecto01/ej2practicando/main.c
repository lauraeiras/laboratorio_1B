#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=5;
    int num2=10;
    int retorno;
    int retorno2;

    printf("Ingrese dos numeros: ");
    retorno = scanf("%d %d", &num1, &num2);// Scanf devuelve un entero de la cantidad de variables que pudo asignar correctamente.


    retorno2 = printf("%d %d y scanf devolvio %d\n", num1, num2, retorno);// Printf devuelve la cantidad de caracteres que pudo imprimir.
    printf("devolvio %d", retorno2);

    return 0;
}
