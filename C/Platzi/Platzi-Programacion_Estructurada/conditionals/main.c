#include <stdio.h>
#include <stdlib.h>

int main()
{
    condicionales_1();
    return 0;
}


void condicionales_1() {
        printf("Condicion if\n");

    float valA, valB, valC;
    valA = valB = 100;

    printf("Primera condicion: ");

    if (valA == valB)
        printf("Ambos son iguales \n");

    printf("Segunda condición: ");
    if (valA == valB) {
        printf("Ambos son iguales \n");
        valC = valA + valB;
        printf("Ademas la suma de ambos numeros es: %f", valC);
    }
}
