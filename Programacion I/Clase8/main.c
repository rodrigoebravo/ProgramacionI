#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
typedef struct S_Persona
{
    //campos
    char nombre[70];
    int edad;
    char dni[20];
    float altura;
}Persona;
void mostrarPersona(Persona* p);
void altaPersona(Persona* p);
int main()
{

    /*
        data[j+1] =data[j];         j++     X                                  //  j--     -->
        data[j]=data[j+1];          j++     <--                               //   j--     X
        data[j-1]=data[j]           j++     (arrancando del maximo) <--      //    j--     X (arrancando del maximo)
        data[j]=data[j-1]           j++     (arrancando del minimo posible) //     j--     -->
    */

    //PRUEBA DE ORDENAMIENTO POR insertion
    /*int A[8];
    int i;
    for(i=0;i<8;i++)
    {
        A[i]=getInt("\nNUMERO?\n");
        printf("%d",A[i]);
    }
    insertion(A, 8);

    for(i=0;i<8;i++)
    {
        printf("%d \n",A[i]);
    }*/

    Persona p;
    /*
    p.edad=27;
    p.altura=1.85;
    strncpy(p.nombre,"Rodrigo",70);
    strncpy(p.dni,"23359762879",20);
    */
    altaPersona(&p);
    mostrarPersona(&p);




    return 0;
}

/*
void bubbleSort (int a[],int len)
{
    int j, aux;
    int flagNoEstaOrdenado = 1;
    while (flagNoEstaOrdenado==1)
    {
        flagNoEstaOrdenado = 0;
        for (j = 1; j < len; j++)
        {
            if (a[j] < a[j - 1])
            {
                aux = a[j];
                a[j] = a[j - 1];
                a[j - 1] = aux;
                flagNoEstaOrdenado = 1;
            }
        }
    }
*/
void mostrarPersona(Persona* p)
{
    p->altura=1.2;
    printf("Nombre: %s\nDNI: %s\nEdad: %d\nAltura: %.2f", p->nombre, p->dni, p->edad, p->altura);
}
void altaPersona(Persona* p)
{
    char nombre[70];
    //int edad;
    //char dni[20];
    //float altura;

    getString("Nombre?", nombre);

    //getInt("Edad?", &edad);
    //getFloat("Altura?");
    //strncpy(p->nombre, nombre, )

}
