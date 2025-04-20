#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaracion del vector con valores iniciales
    int temperaturas[5] = {34, 38, 30, 12, 30};

    //Acceder a cada valor del array
    printf("%d\n", temperaturas[0]);
    printf("%d\n", temperaturas[1]);
    printf("%d\n", temperaturas[2]);
    printf("%d\n", temperaturas[3]);
    printf("%d\n", temperaturas[4]);


    //Escritura de los vectores
    temperaturas[0] = 100;
    temperaturas[1] = 45;
    temperaturas[4] = 34;

    printf("======Reescritura=====\n");

    printf("%d\n", temperaturas[0]);
    printf("%d\n", temperaturas[1]);
    printf("%d\n", temperaturas[2]);
    printf("%d\n", temperaturas[3]);
    printf("%d\n", temperaturas[4]);

    return 0;
}
