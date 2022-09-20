#include <stdio.h>
#include <stdlib.h>

int main()
{
    codigoClase();
    primerosCienNumeros();

    return 0;
}

void codigoClase()
{
    printf("Iterador Do While\n");
    char answer = 'q';
    char value;

    do {
        printf("Ingresa una letra: ");
        scanf("%c", &value);
    }   while (value != answer);

    printf("Coinciden las letras %c == %c", value, answer);
}

void primerosCienNumeros()
{
    int count = 0;
    do {
        printf("%i\n", count);
        count++;

    } while(count < 101);
}
