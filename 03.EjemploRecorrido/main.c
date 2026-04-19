/*
*tile: Recorrido dinámico de vectores
*description: En esta lección aprenderemos a guardar y leer valores en un vector mediante el uso de ciclos for
*author: Jesus Altuve
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperaturas[5], i=0;
    
    //Semilla de inicialización de números aleatorios
	srand(time(NULL));

    //Escribir datos usando el recorrido del ciclo
    for(i = 0; i <= 4; i++) {
            temperaturas[i] = rand () % 34 + 10; // Guarda en el vector un número aleatorio entre 10 y 43
    }

    //Leer datos usando el recorrido del ciclo
    for(i = 0; i <= 4; i++) {
        printf("%d\n", temperaturas[i]);
    }

    return 0;
}
