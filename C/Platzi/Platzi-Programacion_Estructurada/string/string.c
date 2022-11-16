#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    classChallenge();
    return 0;
}

void classChallenge() {
    printf("Cadena de caracteres\n");
    char nameC[50];
    int size;
    printf("Ingregar nombre y obtener valor usando la funcion fgets(): ");
    fgets(nameC, 50, stdin);    // get the string using fgets(variable, size, from where? stdin=keyboard)

    size = strlen(nameC);
    printf("\nEl size de la cadena es: %i\n", size-1);

    printf("El nombre invertido es: \n");
    for (int i = size-1; i >= 0; i--)
    {
        printf("%c", nameC[i]);
    }    

    return nameC;
}

void classExercise() {
    printf("Cadena de caracteres\n");
    char nameC[50];
    int size;
    printf("Ingregar nombre y obtener valor usando la funcion fgets(): ");
    fgets(nameC, 50, stdin);

    printf("El nombre es: ");
    puts(nameC);

    size = strlen(nameC);
    printf("\nEl size de la cadena es: %i\n", size-1);
    
    return nameC;
}

