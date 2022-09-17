#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicional SWITCH\n");

    int option;
        scanf("%i", &option);

    switch (option) {
        case 1:
            printf("Elegiste el numero 1\n");
            break;
        case 2:
            printf("Elegiste el numero 2\n");
            break;
        case 3:
            printf("Elegiste el valor 3\n");
            break;

        default:
            printf("Elegiste una opcion invalida\n");
            break;
    }

    return 0;
}
