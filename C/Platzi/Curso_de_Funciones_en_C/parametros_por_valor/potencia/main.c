#include <stdio.h>

int power(int base, int exponent); // def

int main() {
    int exponent = 3;
    int base = 2;
    printf("Exponente = %d, Base = %d El resultado de la potencia = %d\n", exponent, base, power(base, exponent));
}

int power(int base, int exponent) {
    int p;
    for(p = 1; exponent > 0; exponent--) {
        p = p * base; 
        printf(">>> Valor temporal del exponente es: %d\n", exponent);
    }
    return p;
}

