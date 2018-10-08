#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

static int getFloat(float* pResultado);
static int getInt(int* pResultado);
/*Funcion que recibe la direcciòn de memoria de la variable edad,
Return:
*/
/*int utn_getEdad(int* pEdad)
{
    int auxiliarEdad;
    int retorno=-1;
    int reintentos;

    for(reintentos=3;reintentos>0;reintentos--)
    {
        printf("Edad? \n");

        if(scanf("%d", &auxiliarEdad)==1)
        {
            if(auxiliarEdad>=0 && auxiliarEdad<199)
            {
                *pEdad=auxiliarEdad;
                retorno=0;
                break;
            }
            else
            {
                printf("La edad está fuera de rango (0 a 199)");
            }
        }
        else
        {
            printf("La edad es numérica");
            __fpurge(stdin);
        }

    }
    return retorno;
}
*/

int utn_getEntero(int* pEntero, int reintentos, char* mensaje, char* mensajeError, int minimo, int maximo)
{

    int auxiliarEntero;
    int retorno=-1;

    for(;reintentos>0;reintentos--)
    {
        printf(mensaje);

        if(getInt(&auxiliarEntero)==0)
        {
            if(auxiliarEntero>=minimo && auxiliarEntero<maximo)
            {
                *pEntero=auxiliarEntero;
                retorno=0;
                break;
            }
            else
            {
                printf(mensajeError);
            }
        }
        else
        {
            printf(mensajeError);
            __fpurge(stdin);//fflush
        }
    }
    return retorno;
}

static int getInt(int* pResultado)
{
    int retorno;

    if(scanf("%d", pResultado)==1)
    {
        retorno=0;
    }
    else
    {
        retorno=-1;
    }
    return retorno;
}


int utn_getDecimal(float* pDecimal, int reintentos, char* mensaje, char* mensajeError, int minimo, int maximo)
{
    float auxiliarDecimal;
    int retorno=-1;

    for(;reintentos>0;reintentos--)
    {
        printf(mensaje);

        if(getFloat(&auxiliarDecimal)==0)
        {

            if(auxiliarDecimal>minimo && auxiliarDecimal<maximo)
            {
                *pDecimal=auxiliarDecimal;
                retorno=0;
                break;
            }
            else
            {
                printf(mensajeError);
            }
        }
        else
        {
            printf(mensajeError);
            __fpurge(stdin);
        }
    }
    return retorno;

}

static int getFloat(float* pResultado)
{
    int retorno=-1;

    if(scanf("%f", pResultado)==1)
    {
        retorno=0; //todoOk
    }

    return retorno;
}

// el static en una variable global la hace privada para el archivo
// el static en una variable de una funcion es accesible solo por la funcion pero su valor vive en todo el programa

