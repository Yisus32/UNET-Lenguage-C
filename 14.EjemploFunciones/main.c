/*
*tile: Funciones
*description: Prototipado, definición, implementación de funciones. Paso de parámetros por valor y referencia.
*author: Jesus Altuve
*/

#include <stdio.h>

/*
	Declaracian de la funcion (prototipo): Es una promesa, es decir, mencionarle al compilador que en algun momento, se creará una función
	llamada sumar, que será de tipo entero y recibirá dos parámetros de tipo int.

*/
int sumar(int, int);

/*
	El paso por valor se refiere a enviarle una copia de una variable cualquiera a una función, esto crea en memoria dos versiones de ese valor:
	Uno dentro de la función y otro fuera de la función. Aunque son una copia uno del otro, ambos están almacenados en diferentes ubicaciones de la RAM
*/
int pasoPorValor(int);

/*
	El paso por referenica se refiere a enviarle a la función la dirección de memoria donde está almacenado el valor original
	así, se puede cambiar el valor original desde cualquier lado de la función.
*/
int pasoPorReferencia(int*);


// Definicion de la funcion
int sumar(int a, int b) {
    return a + b;
}

int pasoPorValor(int miNumero) {
	miNumero = miNumero + 100;
	
	return miNumero;
}

int pasoPorReferencia(int* miNumero) {
	*miNumero = *miNumero + 100;
	return *miNumero;
}

int main() {
    int num1, num2, resultado;

    printf("Ingresa el primer n�mero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo n�mero: ");
    scanf("%d", &num2);

    // Llamada o implementación de la funcion
    resultado = sumar(num1, num2);

    printf("La suma es: %d\n\n", resultado);
    
    //Variable num1 llamada fuera de la funcion pasoPorValor
    printf("Valor de num1 es: %d\n", num1);
    printf("Valor de num1 modificado por la función pasoPorValor es: %d\n", pasoPorValor(num1));
    printf("Valor de num1 despues de su llamada dentro de pasoPorValor es: %d\n\n", num1);
    
    //Variable num1 llamada fuera de la funcion pasoPorValor
    printf("Valor de num2 es: %d\n", num2);
    printf("Valor de num2 modificado por la función pasoPorReferencia es: %d\n", pasoPorReferencia(&num2));
    printf("Valor de num2 despues de su llamada dentro de pasoPorReferencia es: %d\n\n", num2);
    
    printf("Notese que num1 sigue siendo el mismo antes y después de la modificacion. Solo cambio dentro de la funcion pasoPorValor\n");
	printf("Mientras que num2 se modifico dentro de la funcion pasoPorReferencia y cambio afuera de la funcion tambien");
	
    return 0;
}
