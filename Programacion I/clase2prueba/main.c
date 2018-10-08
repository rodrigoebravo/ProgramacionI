#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    int numeroMaximo;
    int numeroMinimo;
    float acumuladorNumeros;
    float promedioNumeros;
    int i;
    int o;
/*
    acumuladorNumeros=0;
    for(i=0;i<10;i++)
    {
        printf("Ingrese el valor numero %d: ",i+1);
        scanf("%d",&numero);

        if(i==0)
        {
            numeroMaximo=numero;
            numeroMinimo=numero;
        }

        else if(numero<numeroMinimo)
        {
            numeroMinimo=numero;
        }
        else if(numero>numeroMaximo)
        {
            numeroMaximo=numero;
        }

        acumuladorNumeros+=numero;

    }
    promedioNumeros=acumuladorNumeros/(i);

    printf("Numero maximo: %d \nNumero minimo: %d",numeroMaximo,numeroMinimo);
    printf("\nEl promedio es %f", promedioNumeros);*/


    //int i;
    int j;

    for(i=0;i<24;i++)
    {
        for(j=0;j<60;j++)
        {
            printf("%d : %d \n",i,j);
        }
    }

    return 0;
}
