# include <stdio.h>

int a, b;

void add(int a, int b);	// Declarando la función 

int main() {
	add(100, 150);	// Ejecutando la función
	return 0;
}

void add(int a, int b) {	// Definiendo la función y su lógica
	int add = a + b;
	printf("The result is: %d",  add);
}

