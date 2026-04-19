/*
*tile: Conversión de punteros
*description: Lección donde aprenderemos a trabajar con conversión de tipos de datos entre punteros
*author: Jesus Altuve
*/

#include <stdio.h>

int main() {
    int entero = 65;
    int *pEntero = &entero;

    // Conversi�n de puntero a int a puntero a char
    char *pChar = (char *)pEntero;

    printf("Valor como entero: %d\n", *pEntero);
    printf("Valor como caracter: %c\n", *pChar);

    // Conversi�n de puntero a void (puntero genérico)
    void *pVoid = (void *)pEntero;

    // Para usar el puntero void, necesitamos convertirlo de vuelta
    int *pEnteroDeNuevo = (int *)pVoid;
    printf("Valor despues de conversion void: %d\n", *pEnteroDeNuevo);

    return 0;
}

