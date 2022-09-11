#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores de asignacion");

    int value = 11;

    printf("Muestra el valor de value: %i\n", value);

    value += 1;
    printf("Muestra el valor de value: %i\n", value);

    value -= 2;
    printf("Muestra el valor de value: %i\n", value);

    value *= 5;
    printf("Muestra el valor de value: %i\n", value);

    value /= 4;
    printf("Muestra el valor de value: %i\n", value);

    value %= 6;
    printf("Muestra el valor de value: %i\n", value);


    return 0;
}
