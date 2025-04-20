#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperaturas[8] = {34, 12, 16, 18, 43, 40, 38, 25}; //Array de muestra
    int i, j; //variables para los iteradores
    int auxiliar; //variable temporal para contener el valor que esta siendo cambiado
    int bandera; //variable para determinar si fue ordenado

    for(i = 0; i <= 7; i++) {
        bandera = 0;

        for(j = 0; j <= 7; j++) {
            if(temperaturas[j] > temperaturas[j + 1]) {
                //Se intercambian los valores
                auxiliar = temperaturas[j];
                temperaturas[j] = temperaturas[j + 1];
                temperaturas[j + 1] = auxiliar;

                bandera = 1; //Hubo al menos un cambio
            }
        }
    }

    for(i = 0; i <= 7; i++) {
        printf("%d\t", temperaturas[i]);
    }



    return 0;
}
