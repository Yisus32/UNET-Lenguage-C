#include <stdio.h>

// Declaración de la función (prototipo)
int sumar(int a, int b);

int main() {
    int num1, num2, resultado;

    printf("Ingresa el primer número: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);

    // Llamada a la función
    resultado = sumar(num1, num2);

    printf("La suma es: %d\n", resultado);

    return 0;
}

// Definición de la función
int sumar(int a, int b) {
    return a + b;
}
