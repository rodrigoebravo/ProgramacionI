#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define FALSE 0
#define TRUE 1

/*struct S_Auto
{
    int a;
    float n;
    char p[8];
};
typedef struct S_Auto Auto;*/

/*
//Ok
typedef struct {
    int a;
    float n;
    char p[8];
}Auto;
*/
typedef struct {
    char nombre[32];
    char descripcion[128];
    float precio;
    int isEmpty;
}Producto;
void prod_inicializar(Producto* productos, int len);
int prod_alta(Producto* productos, int index, int len);


int main()
{
    Producto productos[200];
    prod_inicializar(productos, 200);
    prod_alta(productos,prod_getEmptyProducto(productos, 200), 200);

    return 0;
}

void prod_inicializar(Producto* productos, int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        productos[i].isEmpty = 1;
        (productos+i)->isEmpty = 1;
        (*(productos+i)).isEmpty = 1;
    }
}

int prod_alta(Producto* productos, int index, int len)
{
    char nombreAux[32];
    char descripcionAux[128];
    char precio;
    int retorno=-1;

    if(utn_getNombre(nombreAux))
    {
        if(utn_getString(descripcionAux))
        {
            if(utn_getDecimal(&precio, 3, 10000, 0, "Ingrese precio", "Error en precio")==0)
            {
                strncpy(productos[index].nombre, nombreAux, 32);
                strncpy(productos[index].descripcion, descripcionAux, 128);
                productos[index].precio = atof(&precio);
                productos[index].isEmpty = 0;
                retorno=0;
            }
        }
    }
    return retorno;
}

int prod_getEmptyProducto(Producto* productos, int len)
{
    int i;
    int retorno=-1;

    for(i=0; i<len;i++)
    {
        if(productos[i].isEmpty==1)
        {
            retorno=i;
            break;
        }
    }
    return retorno;
}

int generarID(void)
{
    static int contID=-1;

    return contID++;
}
