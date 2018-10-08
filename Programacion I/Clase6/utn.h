#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

//int getEdad(int* edad);
/**
    utn_getEntero: pide un entero al usuario
    @param pEntero: puntero a entero
    @param reintentos: cantidad de reintentos
    @return: 0 OK, -1 error.
*/
int utn_getEntero(int* pEntero, int reintentos, char* mensaje, char* mensajeError, int minimo, int maximo);


/**
    utn_getDecimal: pide un entero al usuario
    @param pDecimal: puntero a edad
    @param reintentos: cantidad de reintentos
    @return: 0 OK, -1 error.
*/
int utn_getDecimal(float* pDecimal, int reintentos, char* mensaje, char* mensajeError, int minimo, int maximo);


#endif // UTN_H_INCLUDED
