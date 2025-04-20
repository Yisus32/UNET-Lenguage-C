#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para las funciones de clasificación de caracteres

#define MAX_STRINGS 3   // Número máximo de cadenas (reducido para ejemplos)
#define MAX_LENGTH 50   // Longitud máxima por cadena

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    char concatenada[MAX_LENGTH * 2] = ""; // Para strcat()
    char copia[MAX_LENGTH];               // Para strcpy()/strncpy()
    int i;

    printf("=== Carga de cadenas ===\n");
    for (i = 0; i < MAX_STRINGS; i++) {
        printf("Cadena %d: ", i + 1);
        fgets(strings[i], MAX_LENGTH, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Elimina '\n'
    }

    // --- Ejemplos con funciones de strings ---
    printf("\n=== Funciones de strings ===\n");

    // strcat(): Concatenar dos cadenas
    strcat(concatenada, strings[0]);
    strcat(concatenada, " + ");
    strcat(concatenada, strings[1]);
    printf("strcat(): %s\n", concatenada);

    // strcpy() vs strncpy()
    strcpy(copia, strings[0]); // Copia completa
    printf("strcpy(): %s\n", copia);

    strncpy(copia, strings[1], 3); // Copia solo 3 caracteres
    copia[3] = '\0'; // Asegura terminación nula
    printf("strncpy(3 chars): %s\n", copia);

    // --- Ejemplos con funciones de caracteres (ctype.h) ---
    printf("\n=== Funciones de clasificación de caracteres ===\n");
    char *ejemplo = "A1b@ \t";

    for (i = 0; ejemplo[i] != '\0'; i++) {
        char c = ejemplo[i];
        printf("'%c' → ", c);

        // Funciones de verificación
        printf(
            "isalnum:%d, isalpha:%d, isdigit:%d, ",
            isalnum(c), isalpha(c), isdigit(c)
        );
        printf(
            "isupper:%d, islower:%d, isspace:%d, ",
            isupper(c), islower(c), isspace(c)
        );
        printf(
            "isxdigit:%d, isprint:%d, ispunct:%d\n",
            isxdigit(c), isprint(c), ispunct(c)
        );
    }

    return 0;
}
