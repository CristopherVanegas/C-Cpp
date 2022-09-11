#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Vamos a calcular el volumen de un cilindro y además su area ;)\n");

    int radio;
    printf("Por favor, ingrese el valor del radio de la base: ");
    scanf("%i", &radio);

    int altura;
    printf("Por favor, ingrese el valor de la altura del cilindro: ");
    scanf("%i", &altura);


    printf("Resultados:\n");
    double area;
    area = (2)*(3.14)*(radio)*(radio+altura);
    printf("El area de la base es: %f\n", area);

    double volumen;
    volumen = (3.14)*(radio*radio)*(altura);
    printf("El volumen es: %f\n", volumen);


    return 0;
}
