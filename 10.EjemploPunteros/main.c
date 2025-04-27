#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cedula;
    int edad;

    printf("Ingrese su cedula: ");
    scanf("%d", &cedula);

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    //El operador & extrae la direccion de memoria que representa a esa variable
    int *punteroCedula = &cedula;
    int *punteroEdad = &edad;

    system("cls");

    //Para acceder a la direccion de memoria usamos el identificador del puntero
    printf("La direccion de memoria de la cedula es: %d\n", punteroCedula);
    printf("La direccion de memoria de la edad es: %d\n", punteroEdad);

    //Para acceder al valor usamos la notacion * junto al identificador
    printf("La cedula es: %d\n", *punteroCedula);
    printf("La edad es: %d\n", *punteroEdad);

    //Si quisieramos sobreescribir los valores, simplemente decimos
    *punteroCedula = 12345678;
    *punteroEdad = 23;

    printf("La sobreescritura de la cedula es: %d\n", *punteroCedula);
    printf("La sobreescritura de la edad es: %d\n", *punteroEdad);

    //Al sobreescribir los valores del puntero, sobreescribimos los de la variable original
    printf("La variable cedula originalmente contiene: %d\n", cedula);
    printf("La variable edad originalmente contiene: %d\n", edad);


    //Conversión de punteros



    return 0;
}
