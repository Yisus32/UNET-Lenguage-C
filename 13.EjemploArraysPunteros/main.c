/*
*tile: Vectores de punteros
*description: Implementación de punteros almacenados dentro de una vector
*author: Jesus Altuve
*/

#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr;

    // Notacion con puntero desplazamiento (pointer offset notation)
    // Esta es la que usas en tu ejemplo original
    printf("Notacion con puntero desplazamiento:\n");
    for(ptr = array; (ptr - array) < 5; ++ptr) {
        printf("%d ", *ptr); // Usamos *ptr para acceder al valor
    }
    printf("\n\n");

    // Notacion con punteros con subindice (pointer subscript notation)
    printf("Notacion con punteros con sub�ndice:\n");
    for(ptr = array; (ptr - array) < 5; ++ptr) {
        printf("%d ", ptr[0]); // Equivalente a *ptr
    }
    printf("\n\n");

    // Otra forma de notacion con subindice usando el array directamente
    printf("Notacion con subindice de array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    // Notacion con aritm�tica de punteros
    printf("Notacion con aritmetica de punteros:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;
}
