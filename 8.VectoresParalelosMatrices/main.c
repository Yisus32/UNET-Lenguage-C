#include <stdio.h>
#include <string.h>

#define FILAS 3
#define COLUMNAS 3

int main() {

    int matriz[FILAS][COLUMNAS] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    char nombres[FILAS][50] = {"Producto A", "Producto B", "Producto C"};
    float precios[FILAS] = {15.5, 25.3, 35.8};

    printf("Información de Productos:\n");
    printf("---------------------------------\n");
    for (int i = 0; i < FILAS; i++) {
        printf("Nombre: %s\n", nombres[i]);
        printf("Precio: $%.2f\n", precios[i]);
        printf("Stock (Fila %d): ", i + 1);

        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        printf("\n---------------------------------\n");
    }

    return 0;
}
