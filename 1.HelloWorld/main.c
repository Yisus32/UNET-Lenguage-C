#include <stdio.h>
#include <stdlib.h>

#define MAX 999
#define GROUPS 20

int main() {
    int response = 0, counter = 0;

    do{
        int i;

        printf("%d ", i++);

        counter++;

        if(counter == GROUPS) {
            printf("\n");

            printf("Desea mostrar el siguiente grupo?: ");
            scanf("%d",&response);

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
