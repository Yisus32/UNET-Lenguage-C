#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {9, 8, 7},
        {3, 2, 1},
        {6, 5, 4}
    };
    int filas = 3, columnas = 3;

    // Mostrar matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Algoritmo de burbuja para ordenar filas por primer elemento
    for (int i = 0; i < filas - 1; i++) {
        for (int j = 0; j < filas - i - 1; j++) {
            if (matriz[j][0] > matriz[j + 1][0]) {
                // Intercambiar filas completas
                for (int k = 0; k < columnas; k++) {
                    int temp = matriz[j][k];
                    matriz[j][k] = matriz[j + 1][k];
                    matriz[j + 1][k] = temp;
                }
            }
        }
    }

    // Mostrar matriz ordenada
    printf("\nMatriz ordenada por primer elemento:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
