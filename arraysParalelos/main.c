#include <stdio.h>
#include <stdlib.h>
/*****************************************************************************
Eiras Laura
Arrays paralelos

******************************************************************************/

#define TAM 300
#define VACIO 0
#define OCUPADO 1
void MostrarEmpleados(int parametroIsEmpty [],int parametroLegajos[],float parametroSueldos[],char parametroNombres[][20],int cantidad);
void CargarEmpleados(int parametroIsEmpty [],int parametroLegajos[],float parametroSueldos[],char parametroNombres[][20],int cantidad);
void OrdenarPorNombreEmpleados(int parametroIsEmpty [],int parametroLegajos[],float parametroSueldos[],char parametroNombres[][20],int cantidad);
void OrdenarPorLegajoEmpleados(int parametroIsEmpty [],int parametroLegajos[],float parametroSueldos[],char parametroNombres[][20],int cantidad);
int menu();

void InicializarEmpleados(int isEmpty[],int cantidad);
int BuscarLibre(int parametroIsEmpty [],int cantidad);


int main()
{
    int legajos[TAM];//={999,888,666,555,777};
    float sueldos[TAM];//={15000,30000,50000,7500,90000};
    char nombres[TAM][20];//={"MARIA","JOSE","PEDRO","JEREMIAS","LAURA"};
    char apellido[TAM][20];//={"MARIA","JOSE","PEDRO","JEREMIAS","LAURA"};
    int isEmpty[TAM];//={OCUPADO,VACIO,OCUPADO,OCUPADO,OCUPADO};
    int opcion;

    do{
        opcion=menu();

        switch(opcion)
        {
            case 1:
                MostrarEmpleados(isEmpty,legajos,sueldos,nombres,TAM);
                break;
            case 2:
                CargarEmpleados(isEmpty,legajos,sueldos,nombres,TAM);
                break;
            case 3:
                //??? cargar un empleado
                break;
            case 7:
                OrdenarPorNombreEmpleados(isEmpty,legajos,sueldos,nombres,TAM);
                break;
            case 8:
                OrdenarPorLegajoEmpleados(isEmpty,legajos,sueldos,nombres,TAM);
                break;

        }

    }while(opcion!=10)



    return 0;
}
int menu()
{
    int op;
        printf("1- Mostar los Empleados cargados\n ");
        printf("2- Carga Todos los empleados \n");
        printf("3- Carga un empleado \n");//tarea
        printf("4- Borrar Uno \n");//tarea
        printf("5- Mostrar datos de los vacios/borrados \n");//tarea
        printf("6- Cantidad de espacios libre \n");//tarea
        printf("7- Ordenar por nombre \n");//tarea
        printf("8- Ordenar por legajo \n");//tarea


        printf("10- para salir ");
        scanf("%d",&op);
        return op;
}
void OrdenarPorLegajoEmpleados(int parametroIsEmpty [],int parametroLegajos[],float parametroSueldos[],char parametroNombres[][20],int cantidad)
{
    int i;
    int j;
    int auxLegajo;
    int auxIsEmpty;
    float auxSueldo;
    char auxNombre[20];
    for(i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {


            //verdadero, los otros no lo evalua
            //falso || verdadero && verdadero
            //falso || falso los otros no lo evaluo

            if(parametroLegajos[i]<parametroLegajos[j] )//|| parametroLegajos[i]==parametroLegajos[j] && parametroSueldos[i]<parametroSueldos[j] )
            {
                auxLegajo=parametroLegajos[i];
                parametroLegajos[i]=parametroLegajos[j];
                parametroLegajos[j]=auxLegajo;

                auxIsEmpty=parametroIsEmpty[i];
                parametroIsEmpty[i]=parametroIsEmpty[j];
                parametroIsEmpty[j]=auxIsEmpty;

                auxSueldo=parametroSueldos[i];
                parametroSueldos[i]=parametroSueldos[j];
                parametroSueldos[j]=auxSueldo;


                strcpy(auxNombre,parametroNombres[i]);
                strcpy(parametroNombres[i],parametroNombres[j]);
                strcpy(parametroNombres[j],auxNombre);


            }/*else
            {
                if(parametroLegajos[i]==parametroLegajos[j])
                {
                    if(parametroSueldos[i]<parametroSueldos[j])
                    {

                        auxLegajo=parametroLegajos[i];
                        parametroLegajos[i]=parametroLegajos[j];
                        parametroLegajos[j]=auxLegajo;

                        auxIsEmpty=parametroIsEmpty[i];
                        parametroIsEmpty[i]=parametroIsEmpty[j];
                        parametroIsEmpty[j]=auxIsEmpty;

                        auxSueldo=parametroSueldos[i];
                        parametroSueldos[i]=parametroSueldos[j];
                        parametroSueldos[j]=auxSueldo;

                        strcpy(auxNombre,parametroNombres[i]);
                        strcpy(parametroNombres[i],parametroNombres[j]);
                        strcpy(parametroNombres[j],auxNombre);



                    }
                }
            }
            */
        }
    }

}

void CargarEmpleados(int parametroIsEmpty [],int parametroLegajos[],float parametroSueldos[],char parametroNombres[][20],int cantidad)
{
      int i ;
    for(i=0;i<cantidad;i++)
    {
       parametroLegajos[i]=dameEntero(1000,2000);
        printf("ingrese sueldo : ");
        scanf("%f",&parametroSueldos[i]);
        printf("ingrese Nombre : ");
        __fpurge(stdin);
        scanf("%[^\n]",parametroNombres[i]);
        parametroIsEmpty[i]=OCUPADO;


    }
}



void InicializarEmpleados(int parametroIsEmpty[],int cantidad)
{
       int i;
    for(i=0;i <cantidad;i++)
    {
       parametroIsEmpty[i]=VACIO;
    }
}

int BuscarLibre(int parametroIsEmpty [], int cantidad)
{
    int i;
    int indice=-1;
    for(i=0;i <cantidad;i++)
    {
       if(parametroIsEmpty[i]==VACIO)
       {
           indice=i;
       }
    }
    return indice;

}
void MostrarEmpleados(int parametroIsEmpty [],int parametroLegajos[],float parametroSueldos[],char parametroNombres[][20],int cantidad)
{
      int i;
    for(i=0;i <cantidad;i++)
    {
        if(parametroIsEmpty[i]==OCUPADO)
        {
              printf("%4d %8.2f %10s \n",parametroLegajos[i],parametroSueldos[i],parametroNombres[i]);
        }

    }

}
