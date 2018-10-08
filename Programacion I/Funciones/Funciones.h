#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**
    utn_getentero : Pide un numero entero al usuario
    @param pEdad : puntero a edad
    @param reintentos: cantidad de intentos
    @param msg: puntero a un mensaje
    @param msgError: puntero a un msj error
    @return 0 is ok, -1 error
*/
int utn_getEntero(int*pEdad,int reintentos,char* msg,char*msgError,int max,int min);
/**
    utn_getchar:valida una entrada al usuario en formato char
    @param pResultado: puntero donde guardar el char obtenido
    @return 0 is ok, -1 error
*/
int utn_getChar(char*pResultado);

int utn_mostrarArray(int * pArray,int limite);

int utn_calcularNumeroMaximo(int *pArray,int limite,int *maximo);

int utn_initArray(int * pArray,int limite,int valor);

/**
verifica la entrada de un numero entero.
@parametros
pEntrada: puntero a la variable int
texto: puntero a texto a mostras para ingresar el dato
textoError: puntero a texto para mostrar error en la validacion
*/
int utn_verificarNumeroEntero(int *pEntero,char* texto,char* textoError);
/**
verifica la entrada de un numero float.
@parametros
pEntrada: puntero a la variable float
texto: puntero a texto a mostras para ingresar el dato
textoError: puntero a texto para mostrar error en la validacion
*/
int utn_verificarNumeroFloat(float *pEntero,char* texto,char* textoError);
/**
verifica la entrada de un numero Char.
@parametros
pEntrada: puntero a la variable Char
texto: puntero a texto a mostras para ingresar el dato
textoError: puntero a texto para mostrar error en la validacion
*/
int utn_verificarNumeroChar(char *pChar,char* texto,char* textoError);
/**
Carga numeros aleatorios en un array desde un min a un max
@parametros
pArray:puntero al array a cargar
len:tama�o del array
min:numero minimo
max:numero max
*/
int utn_cargaNumeroAleatoriosEnArrays(int* pArray,int len,int min, int max);
/** Calcula el promedio de un array de enteros:
@parametros
pArray: puntero al array
limite: numero de indices del array
promedio: puntero a la variable donde cargar el resultado
valorOmision: numero el cual me indique que el indice esta vacio,para omitir su suma
return: retorna -1 si el array esta cargado solo de valores de omision, 0 is ok
*/
int utn_promedioArray(int*pArray,int limite,float *promedio,int valorOmision);

#endif // FUNCIONES_H_INCLUDED
