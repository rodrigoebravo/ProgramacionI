#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*int esNumero(char* pCadena);
int getEntero(char* numeroBuffer, int reintentos, int maximo, int minimo, char* mensaje, char* mensajeError);
int getEntero(char* numeroBuffer, int reintentos, int maximo, int minimo, char* mensaje, char* mensajeError)
{
    int retorno=-1;
    int numero;
    printf(mensaje);
    fgets(numeroBuffer, sizeof(numeroBuffer), stdin);
    //48 a 57
    do{
        if(esNumero(numeroBuffer)==1)
        {
            if(numero<maximo && numero > minimo)
            {
                numero=atoi(numeroBuffer);
            }
        }
        reintentos--;
    }while(reintentos>0)
    //fflush(stdin);
    return retorno;
}

int esNumero(char* pCadena)
{
    int retorno=0;
    int i=0;

    while(pCadena[i]!=0)
    {
        if(pCadena[i]<48 || pCadena[i]>57)
        {
            retorno=-1;
            break;
        }
         i++;
    }

    return retorno;
}*/
