#include <stdio.h>
#include <stdlib.h>

/** \brief pide al usuario un entero entre 200 y 500
 *
 * \param mensaje a darle al usuario para pedir dato
 * \param mensaje a mostrar en caso de ingreso invalido
 * \param limite inferior del rango
 * \param limite superior del rango
 * \return devuelve un entero en el rango solicitado
 *
 */
int pedirEnteroRango(char mensaje[],char mensajeError[],int limiteInferior, int limiteSuperior);

/** \brief Pido un caracter entre dos caracteres posibles
 *
 * \param mensaje a darle al usuario para pedir dato
 * \param mensaje a mostrar en caso de ingreso invalido
 * \param primer caracter valido
 * \param segundo caracter valido
 * \return el caracter solicitado validado
 *
 */


char pedirCaracteres(char mensaje[], char mensajeError[] , char caracter1 , char caracter2);

int main()
{
    char sexo;
    char seguir;

    sexo= pedirCaracteres("Ingrese sexo f/m:","Error.Ingrese f/m:", 'f', 'm');   //le paso el rango que quiero usar en la llamada

    printf("El sexo ingresado es %c\n\n", sexo);

    seguir= pedirCaracteres("Desea continuar? s/n:","Error.Desea continuar? s/n:", 's', 'n');

    if(seguir == 's')
    {
        printf("Quiere continuar.\n");
    }
    else
    {
        printf("No quiere continuar\n");
    }

    return 0;
}


//Le paso el autocompletado por parametros
int pedirEnteroRango(char mensaje[],char mensajeError[], int limiteInferior, int limiteSuperior)//Para que reciba caracteres
{
    int numero;
    //Si quiero mostrar literalmente la cadena uso puts y si quiero con formato uso printf
    //Puts  tiene el /n integrado.
    puts(mensaje);//Mensaje a pedir numero,edad,lo que sea
    scanf("%d", &numero);
    while(numero < limiteInferior || numero > limiteSuperior)//validacion
    {
        puts(mensajeError);//Muestra mensaje de error de lo que pedi
        scanf("%d", &numero);
    }
    return numero;

}
char pedirCaracteres(char mensaje[], char mensajeError[] , char caracter1 , char caracter2)
{
    char caracterSolicitado;

    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c", &caracterSolicitado);

    while(caracterSolicitado != caracter1 && caracterSolicitado != caracter2)
    {
        printf("%s", mensajeError);
        fflush(stdin);
        scanf("%c", &caracterSolicitado);
    }
    return caracterSolicitado;
}
