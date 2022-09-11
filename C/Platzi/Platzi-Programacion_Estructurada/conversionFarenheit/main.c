#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bienvenidx al programa de conversion de grados Farenheit a Celsius ;)\n");
    float tempF;
    printf("A continuacion, ingrese la temperatura en grados Farenheit: ");
    scanf("%f", &tempF);

    float tempC = (tempF-32)/1.8;
    printf("El valor en grados Celsius es: %f\n\n\n", tempC);

    return 0;
}
