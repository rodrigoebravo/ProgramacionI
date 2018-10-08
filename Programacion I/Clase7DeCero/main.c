#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


#define CANTIDAD_EMPLEADOS 6

int main()
{
    int edades[CANTIDAD_EMPLEADOS] = {50,10,30,1,10,22};
    char nombres[15][50];
    nombres[0][0] = "Martin\0";
    nombres[1][0] = "Claudia\0";
    int i;
    for(){
    }

    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getEntero(&edades[i],"\nEdad?","\nEdad fuera de rango",0,200,2)==-1)
        {
            edades[i] = -1;
        }
        if(utn_getNombre(&nombres, "Nombre?", "Nombre erroneo", 4, 15, 2))
        {

        }

    }

    return 0;
}






