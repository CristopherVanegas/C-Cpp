#include <stdio.h>
#include <string.h>

char string1[60];
char string2[60];

int main() {
    printf("Escribe una frase\n");
    gets(string1);
    printf("Escribe otra frase para compararla:\n");
    gets(string2);

    if(strcmp(string1, string2) == 0)
        printf(">>> Ingresaste dos strings identicos\n");
    else {
        strcat(string1, string2);
        printf(">>> Ingresaste dos strings distintos, si los unimos da como resultado > %s\n", string1);
    }

    strrev(string1);
    printf("El string al reves es: %s\n", string1);

    concat();
    return 0;
}

void concat() {
    strcat(string1, string2);
    printf(">>> The result of concatenate the two strings is > %s\n", string1);
}
