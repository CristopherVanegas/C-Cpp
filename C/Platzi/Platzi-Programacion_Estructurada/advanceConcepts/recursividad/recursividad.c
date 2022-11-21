#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    printf("Entra a la funcion factorial, n vale: %i\n", n);

    if(n > 1) {
        printf("La funcion se llamara a si misma otra vez\n");
        printf("\n");
        return n * factorial(n-1);

    } else {
        printf("n es igual a 1,  termina la recursividad\n");
        printf("\n");
        return 1;
    }
    return 0;
}

int main() {
    int n = 5;
    printf("El factorial de %i es %i", n, factorial(n));
}