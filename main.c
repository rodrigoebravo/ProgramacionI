#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int esNumero(char* pCadena);
int getEntero(char* numeroBuffer, int reintentos, int maximo, int minimo, char* mensaje, char* mensajeError);

int main()
{
    int a=0;
    char ingreso[1];
    a=getEntero(ingreso, 3, 100, 0, "Numero? \n", "Error! \n");
    printf("la funcion devolvió: %d", a);
    return 0;
}

int getEntero(char* numeroBuffer, int reintentos, int maximo, int minimo, char* mensaje, char* mensajeError)
{
    int retorno=-1;
    int numero;

    do{
        printf(mensaje);
        fgets(numeroBuffer, sizeof(numeroBuffer), stdin);

        if(esNumero(numeroBuffer)==0)
        {
            numero=atoi(numeroBuffer);
            if(numero<maximo && numero>minimo)
            {
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
        }
        fflush(stdin);
        reintentos--;
    }while(reintentos>0);
    return retorno;
}

int esNumero(char* pCadena)
{
    int retorno=0;
    int i=0;
    //printf(pCadena);

    while(pCadena[i]!=0 && pCadena[i]!=10)
    {
        if(pCadena[i]<48 || pCadena[i]>57)
        {
            retorno=-1;
            break;
        }
         i++;
    }
    return retorno;
}
