#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cafe;
    printf("Bienvenido al programa de Cafés\n");
    printf("Ingrese un valor del 1 al 3 para elegir su tipo de cafe.\n");
    printf("1. Expreso\n");
    printf("2. Capuccino\n");
    printf("3. Cafe con leche\n\n");

    printf("Tipo de café elegido: ");
        scanf("%i", &cafe);

    switch (cafe) {
        case 1:
            printf("Tenga su Expreso ;)");
            break;

        case 2:
            printf("Tenga su Capuccino ;)");
            break;

        case 3:
            printf("Tenga su Café con Leche ;)");
            break;

        default:
            printf("Valor introducido incorrecto, Fuera de servicio.");
    }

    printf("\n\n");
    return 0;
}
