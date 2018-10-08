#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"



int main()
{

    //int entero;
    float decimal;
    char* mensaje;
    char* mensajeError;
    mensaje="Ingrese valor \n";
    mensajeError="Ha ocurrido un error \n";

    /*if(getEdad(&edad)==0)
    {
        printf("La edad es: %d", edad);
    }
    */
    /*if(utn_getEntero(&entero,3,mensaje,mensajeError,0,199)==0)
    {
        printf("El entero es: %d", entero);
    }*/

    if(utn_getDecimal(&decimal,3,mensaje,mensajeError,0,199)==0)
    {
        printf("El decimal es: %f", decimal);
    }


    return 0;
}


