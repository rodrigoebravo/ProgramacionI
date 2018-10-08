#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"
#include <string.h>


static int getInt(int* pBuffer);
static int isFloat(char* pBuffer);
static int getFloat(float* pBuffer);


static int getString(char* pBuffer, int limite)
{
    char bufferString[4096];
    int retorno=-1;

    if(pBuffer!=NULL && limite>0)
    {
        __fpurge(stdin);
        fgets(bufferString, sizeof(bufferString), stdin);

        if(bufferString[strlen(bufferString)-1]=='\n')
        {
            bufferString[strlen(bufferString)-1]='\0';
        }

        if(strlen(bufferString)<=limite)
        {
            strncpy(pBuffer, bufferString, limite);
            retorno=0;
        }
    }
    return retorno;

}

int utn_getNombre(char* pNombre, char* msg, char msgErr[], int min, int max, int reintentos)
{
    int retorno=0;
    char bufferNombre[sizeof(pNombre)];

    if(pNombre != NULL && msg != NULL && msgErr != NULL
        && min <= max && reintentos >= 0)
    {
        getString(&bufferNombre);
    }

    return retorno;
}

static int getFloat(float* pBuffer)
{
    //char bufferString[4];
    int retorno=-1;

    //__fpurge(stdin);

    /*
    if(scanf("%s", bufferString)==1 && isFloat(bufferString))
    {
        *pBuffer=atof(bufferString);
        retorno=0;
    }
    */
    return retorno;
}


int utn_getEntero(int* pEntero, char* msg, char msgErr[], int min, int max, int reintentos)
{
//char* msg, char msgErr[] los dos hacen referencia a la posicion de memoria de la primer posicion de memoria del vector
// * : operador de indireccion
    int retorno=-1;
    int bufferInt;
    if(pEntero != NULL && msg != NULL && msgErr != NULL
        && min <= max && reintentos >= 0)
    {
        do
        {
            reintentos--;
            printf("%s",msg);
            if( (getInt(&bufferInt) == 1) &&
                (bufferInt >= min && bufferInt <= max))
            {
                *pEntero = bufferInt;
                retorno = 0;
                break;
            }
            else
            {
                __fpurge(stdin);
                printf("%s",msgErr);
            }
            //-------continue
        }while(reintentos>=0);
            //*******break
    }
    return retorno;
}

static int getInt(int* pBuffer)
{
    return scanf("%d",pBuffer);
}
static int isFloat(char* pBuffer)
{
    return 1;
}






















