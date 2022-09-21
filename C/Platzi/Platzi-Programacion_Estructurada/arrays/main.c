#include <stdio.h>
#include <stdlib.h>

int main()
{
    claseArrays();
    //reto1();
    return 0;
}

void reto1() {
    // multiply EVERY value from a array.
    int arr[5], result = 1, count = 1;

    for (int i = 0; i <= 4; i++) {
        printf("Ingresa un entero para tu array (%i/5): ", i+1);
            scanf("%i", &arr[i]);
        result *= arr[i];
    }

    printf("Resultado: %i", result);
}

 void claseArrays() {
    printf("Arreglos Unidimensionales\n");

    int integerList[3];
    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;


    float floatList[] = {
        23.4, 34.5, 45.6, 21.8, 56.7
    };

    char charList[4];
    charList[0] = 'J';
    charList[1] = 'u';
    charList[2] = 'l';
    charList[3] = 'o';

    printf("\n Primer entero: \t\t %i", integerList[0]);
    printf("\n Último flotante: \t\t %f", floatList[4]);
    printf("\n Lista de caracteres: \t\t %c%c%c%c.", charList[0], charList[1], charList[2], charList[3]);
    printf("\n\n");
 }

