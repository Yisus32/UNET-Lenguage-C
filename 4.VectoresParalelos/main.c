#include <stdio.h>
#include <stdlib.h>

int main()
{
    char estudiantes[10][10];
    float notas[10];

    for (int i = 0; i <= 9; i++) {
        system("cls");

        printf("Ingrese el estudiante %d: ", i + 1);
        scanf(" %[^\n]s", &estudiantes[i]);

        do {
            printf("Ingrese la nota de %s: ", estudiantes[i]);
            scanf("%f", &notas[i]);
        } while(notas[i] < 0.00 || notas[i] >= 20.01);
    }

    system("cls");
    printf("Lista de notas definitivas\n");

    for(int i = 0; i <=9; i++) {
        printf("%s\t %2.f\n", estudiantes[i], notas[i]);
    }
}
