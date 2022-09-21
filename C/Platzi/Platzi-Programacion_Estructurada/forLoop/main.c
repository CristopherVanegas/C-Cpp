#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Sucesión Fibonacci - FOR\n");
    fibonacciLoop();

    return 0;
}

int fibonacciLoop() {
    int n, sucesion;
    printf("Por favor ingresa un valor n: ");
        scanf("%i", &n);

    if ((n == 1) || (n == 0)) {
        printf("%i\n", n);
        printf("Programa terminado.\n");
        return n;
    }

    else if (n < 0)
    {
        printf("El valor debe ser mayor igual a 0\n");
        printf("Programa terminado.\n");
        return 0;
    }

    else if (n > 1) {
        int x = 0;
        int y = 1;
        int z;

        printf("%i\n", x);
        printf("%i\n", y);

        for (int i = 1; i <= 7; i++) {
            int z = x + y;
            printf("%i\n", z);

            x = y;
            y = z;
            //sucesion = (z-1) + (z);
        }
        printf("Programa terminado.\n");
        return 0;

    }
}

