#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1, num_2;
    printf("Ingresa el primer numero: ");
        scanf("%i", &num_1);

    printf("Ingresa el primer numero: ");
        scanf("%i", &num_2);

    if (num_1 < num_2)
        printf("%i es menor al valor 2", num_1);
    else
        printf("%i es menor al valor 1", num_2);

    return 0;
}
