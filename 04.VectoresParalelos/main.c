/*
*tile: Vectores paralelos
*description: Programa que permite guardar en dos vectores distintos, valores que comparten un mismo indice
*author: Jesus Altuve
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char estudiantes[10][10]; // Un vector de cadenas es lo equivalente a una matriz de chars
    float notas[10];

    for (int i = 0; i <= 9; i++) {
        system("cls");

        printf("Ingrese el estudiante %d: ", i + 1);
        scanf(" %[^\n]s", &estudiantes[i]); // Con esta expresión regular " %[^\n]s" puedo almacenar cadenas de caracteres

        do {
            printf("Ingrese la nota de %s: ", estudiantes[i]);
            scanf("%f", &notas[i]);
        } while(notas[i] < 0.00 || notas[i] >= 20.01); //Validación para evitar cargas de notas mayores a 20 o negativas
    }

    system("cls");
    printf("Lista de notas definitivas\n");

    for(int i = 0; i <=9; i++) {
        printf("%s\t %2.f\n", estudiantes[i], notas[i]); // \t me permite tabular horizontalmente y 2.f me permite mostrar valores flotantes con dos decimales
    }
}
