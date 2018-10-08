#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
int mostrarArray(int* pArray, int limite);

#define CANTIDAD_EMPLEADOS 5 //STACK DEL MAIN

int main()
{
    int edades[CANTIDAD_EMPLEADOS];
    int i;
    for(i=0;i<CANTIDAD_EMPLEADOS;i++)
    {
        //&edades[i]---> edades + 1
        if(utn_getEntero(&edades[i], 2, "Edad?\n", "Error\n", 0, 190)==-1)
        {
            edades[i]=-1;
        }
    }
    mostrarArray(edades, CANTIDAD_EMPLEADOS);
    printf("\n");
    mostrarArray(edades+2, CANTIDAD_EMPLEADOS-2);
    return 0;
}

int mostrarArray(int* pArray, int limite)
{
    int i;
    for(i=0; i<limite;i++)
    {
        printf("\nIndex:[%d] - Value: %d, Add: %p",i,pArray[i],pArray + i);
    }
    return 0;
}
