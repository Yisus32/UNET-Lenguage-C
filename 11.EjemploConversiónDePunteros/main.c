#include <stdio.h>

int main() {
    int entero = 65;
    int *pEntero = &entero;

    // Conversi�n de puntero a int a puntero a char
    char *pChar = (char *)pEntero;

    printf("Valor como entero: %d\n", *pEntero);
    printf("Valor como caracter: %c\n", *pChar);

    // Conversi�n de puntero a void (puntero gen�rico)
    void *pVoid = (void *)pEntero;

    // Para usar el puntero void, necesitamos convertirlo de vuelta
    int *pEnteroDeNuevo = (int *)pVoid;
    printf("Valor despues de conversion void: %d\n", *pEnteroDeNuevo);

    return 0;
}

