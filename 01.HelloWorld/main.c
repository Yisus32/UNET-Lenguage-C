/*
*tile: Grupos numericos
*description: PROGRAMA QUE MUESTRA GRUPOS DE 20 NUMEROS DESDE EL 0, LUEGO PREGUNTA SI QUIERE MOSTRAR MÁS GRUPOS (SI = 1, NO = 0)
*author: Jesus Altuve
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 999
#define GROUPS 20

int main() {
    int response = 0, counter = 0;
    int i = 0;

    do{
        printf("%d ", i++);

        counter++;

        if(counter == GROUPS) {
            printf("\n");

			do {
				printf("Desea mostrar el siguiente grupo?: ");
            	scanf("%d",&response);	
			}while(response != 0 && response != 1); // Validar que el usuario solo ingrese 0 y 1 como respuesta

            if(response == 0) {
                break; //break termina la ejecucion del ciclo
            }

            counter = 0;
        }

    }while(counter <= MAX);

    system("cls");
    printf("Fin del programa");

    return 0;
}
