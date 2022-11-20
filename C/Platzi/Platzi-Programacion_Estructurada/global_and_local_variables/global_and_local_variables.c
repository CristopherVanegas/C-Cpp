#include <stdio.h>
#include <stdlib.h>

// global variable
char publicText[] = {
    "Text in a global variable"
};


void check() {
    printf("\nPrinting from function: check");
    
    // prints "global" variable.
    printf("Variable Global: ");
    printf("%s", publicText);


    // prints "local" variable.
    printf("Prints local variable: ");
    //printf("%s", privateText);
}

int main() {
    printf("Global variables!\n");
    char privateText[] =  {
        "This is a private text"
    };

    // prints "global" variable.
    printf("Variable Global: ");
    printf("%s", publicText);


    // prints "local" variable.
    printf("Prints local variable: ");
    printf("%s", privateText);

    check();
    return 0;
}

