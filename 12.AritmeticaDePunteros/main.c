#include <stdio.h>

int main() {
    double valores[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    double *p = valores;
    double *q = valores + 4;

    printf("Recorrido ascendente:\n");
    while(p <= q) {
        printf("%.1f ", *p);
        p++;
    }

    printf("\n\nRecorrido descendente:\n");
    while(q >= valores) {
        printf("%.1f ", *q);
        q--;
    }

    printf("\n\nDiferencia: %td elementos\n", (q + 5) - valores);
    return 0;
}
