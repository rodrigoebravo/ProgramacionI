#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED


int utn_getEntero(char* numeroBuffer, int intentos, int maximo, int minimo, char* mensaje, char* mensajeError);
int utn_getDecimal(char* numeroBuffer, int intentos, int maximo, int minimo, char* mensaje, char* mensajeError);
int utn_getNombre(char* pNombreBuffer);
int utn_getString(char* pBuffer);
#endif // UTN_H_INCLUDED
