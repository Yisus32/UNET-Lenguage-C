#include <stdio.h>

// Declaraci�n de la funci�n (prototipo)
int sumar(int a, int b);

int main() {
    int num1, num2, resultado;

    printf("Ingresa el primer n�mero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo n�mero: ");
    scanf("%d", &num2);

    // Llamada a la funci�n
    resultado = sumar(num1, num2);

    printf("La suma es: %d\n", resultado);

    return 0;
}

// Definici�n de la funci�n
int sumar(int a, int b) {
    return a + b;
}
