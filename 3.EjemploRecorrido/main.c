#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperaturas[5], i=0;
    srand(time(NULL));

    //Escribir datos usando el recorrido del ciclo
    for(i = 0; i <= 4; i++) {
            temperaturas[i] = rand () % 34 + 10;
    }

    //Leer datos usando el recorrido del ciclo
    for(i = 0; i <= 4; i++) {
        printf("%d\n", temperaturas[i]);
    }

    return 0;
}
