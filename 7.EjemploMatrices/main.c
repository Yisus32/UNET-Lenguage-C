#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperaturas[3][5] =
    {
        {20, 30, 23, 45, 30},
        {32, 12, 23, 12, 23},
        {12, 34, 10, 12, 30}
    };

    //Lectura de datos estáticos de una matriz

    for(int i = 0; i <= 2; i ++)
    {
        for(int j = 0; j <= 4; j ++)
        {
            printf("%d\t", temperaturas[i][j]);
        }

        printf("\n");
    }

    //Escritura de una matriz con valores aleatorios
    int horasDelDia[3][5];

    srand(time(NULL));

    for(int i = 0; i <= 2; i ++)
    {
        for(int j = 0; j <= 4; j ++)
        {
            horasDelDia[i][j] = rand() % 25 + 0;
        }
    }

    printf("\n Horas del dia \n");

    //Se imprime el array
    for(int i = 0; i <= 2; i ++)
    {
        for(int j = 0; j <= 4; j ++)
        {
            printf("%d\t", horasDelDia[i][j]);
        }

        printf("\n");
    }

    //Lectura directa
    printf("\nAccediendo a la fila 2 y columna 3 de la matriz temperatura: ");
    printf("%d", temperaturas[2][3]);


    return 0;
}
