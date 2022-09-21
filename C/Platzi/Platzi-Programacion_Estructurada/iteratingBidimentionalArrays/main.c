#include <stdio.h>
#include <stdlib.h>

int main()
{
    classChallenge();
    return 0;
}

void classChallenge() {
    // find the greatest number in a linear array
    int arr[100], limit, greatest_num;

    printf("Ingresa un límite para tu array: ");
        scanf("%i", &limit);
    for (int i = 0; i < limit; i++) {
        // add input numbers
        printf("Ingresa un número para tu posición (%i): ", i);
            scanf("%i", &arr[i]);
    }

    for (int i = 0; i < limit; i++) {
        // find the greatest number in the array
        greatest_num = arr[0];
        if (arr[i] > greatest_num)
        {
            greatest_num = arr[i];
        }
        else {continue;}
    }

    printf("\n > El número mayor es %i\n\n", greatest_num);
}

void classCode() {
    printf("Iterating Bidimentional Arrays!\n");

    int integerArray[11];

    for (int i = 0; i < 11; i++) {
        integerArray[i] = i*i;
        printf("Valor (%i): %i \n", i, integerArray[i]);
    }
}
