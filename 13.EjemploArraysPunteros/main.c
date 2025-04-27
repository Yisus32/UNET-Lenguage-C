#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr;

    // Notación con puntero desplazamiento (pointer offset notation)
    // Esta es la que usas en tu ejemplo original
    printf("Notación con puntero desplazamiento:\n");
    for(ptr = array; (ptr - array) < 5; ++ptr) {
        printf("%d ", *ptr); // Usamos *ptr para acceder al valor
    }
    printf("\n\n");

    // Notación con punteros con subíndice (pointer subscript notation)
    printf("Notación con punteros con subíndice:\n");
    for(ptr = array; (ptr - array) < 5; ++ptr) {
        printf("%d ", ptr[0]); // Equivalente a *ptr
    }
    printf("\n\n");

    // Otra forma de notación con subíndice usando el array directamente
    printf("Notación con subíndice de array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    // Notación con aritmética de punteros
    printf("Notación con aritmética de punteros:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;
}
