# include <stdio.h>

int a, b;

int add(int a, int b);	// Declarando la función 

int main() {
    printf("The result is: %d",  add(100, 150));    // Ejecutando la función mientras se imprime
	return 0;
}

int add(int a, int b) {	// Definiendo la función y su lógica
	int add = a + b;
    return add;
}

