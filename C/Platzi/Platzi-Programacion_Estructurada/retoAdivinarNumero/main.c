#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numAdivinar = 5;
    printf("Bienvenido al programa para adivinar un número!\n");

    adivinarNumero(numAdivinar);
    return 0;
}


void adivinarNumero(int numAdivinar) {
    int inputNum;
    printf("Ingrese un numero entre el 1 y el 10 para comenzar: ");
    scanf("%i", &inputNum);

    if (inputNum == numAdivinar) {
        printf("Perfecto! Lo adivinaste, acabas de ganar ;)\n");
    }

    else {
        printf("Uh, no es el número que ingresaste. Perdiste! ;(\n\n");
    }
}
