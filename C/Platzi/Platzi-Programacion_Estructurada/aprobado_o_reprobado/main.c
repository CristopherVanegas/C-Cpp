#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    printf("Ingresar nota del estudiante: ");
        scanf("%i", &nota);

    if (nota < 60)
        printf("Reprobado");

    else if (nota > 90)
        printf("Felicitaciones, aprobaste y con mas de 90 c:");

    else if (nota >= 60 && nota <= 90) {
            printf("Aprobado");
    }

    return 0;
}
