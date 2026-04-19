/*
*tile: Ejemplo de vectores
*description: Declaración, escritura y lectura de vectores mediante acceso individual a sus valores
*author: Jesus Altuve
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaracion del vector con valores iniciales
    int temperaturas[5] = {34, 38, 30, 12, 30};
    
    /*
     * ESTRUCTURA DE UN VECTOR (ARRAY)
     *
     * Imaginalo como una fila de casilleros numerados:
     *
     * +------+------+------+------+------+
     * VALORES:    |  34  |  38  |  30  |  12  |  30  |  <-- El contenido real
     * +------+------+------+------+------+
     * ^      ^      ^      ^      ^
     * |      |      |      |      |
     * ÍNDICES:      [0]    [1]    [2]    [3]    [4]     <-- La posición (¡Empieza en 0!)
     *
     * -------------------------------------------------------------------------
     * CONCEPTOS CLAVE:
     *
     * 1. ÍNDICE: Es el número entre corchetes. Se usa para acceder a una caja.
     * Ejemplo: temperaturas[0] te lleva a la primera caja.
     *
     * 2. VALOR: Es el dato almacenado dentro de esa caja.
     * Ejemplo: El valor en temperaturas[0] es 34.
     *
     * 3. LÍMITE: Si el tamaño es 5, los índices van de 0 a 4. 
     * ¡Llamar a temperaturas[5] causaría un error!
     */

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
