// * -> Operador de INDIRECCION.
// & -> Operador de DIRECCION.

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Apuntadores!\n");
    
    float val;                  // val = 0.000000
    float *ApuntadorVal;

    ApuntadorVal = &val;
    *ApuntadorVal = 3.1416;     // val = 3.1416
    printf("%f", val);
    return 0;
}