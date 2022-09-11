#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Ingresar un valor entero: ");
    scanf("%i", &number);
    printf("El valor entero es: %i\n", number);

    float modulo;
    modulo = (number%=5);
    printf("Su modulo es %f\n", modulo);
    printf("El modulo + 1 es igual a: %f\n\n", ++modulo);
    return 0;
}
