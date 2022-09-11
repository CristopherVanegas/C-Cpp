#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    x += (2*10);
    // x *= 3;  ->  // Otra opcion

    printf("El valor de x sumado el doble de su propio valor es: %i", x);
    return 0;
}
