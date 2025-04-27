#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr;

    // Notaci�n con puntero desplazamiento (pointer offset notation)
    // Esta es la que usas en tu ejemplo original
    printf("Notaci�n con puntero desplazamiento:\n");
    for(ptr = array; (ptr - array) < 5; ++ptr) {
        printf("%d ", *ptr); // Usamos *ptr para acceder al valor
    }
    printf("\n\n");

    // Notaci�n con punteros con sub�ndice (pointer subscript notation)
    printf("Notaci�n con punteros con sub�ndice:\n");
    for(ptr = array; (ptr - array) < 5; ++ptr) {
        printf("%d ", ptr[0]); // Equivalente a *ptr
    }
    printf("\n\n");

    // Otra forma de notaci�n con sub�ndice usando el array directamente
    printf("Notaci�n con sub�ndice de array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    // Notaci�n con aritm�tica de punteros
    printf("Notaci�n con aritm�tica de punteros:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;
}
