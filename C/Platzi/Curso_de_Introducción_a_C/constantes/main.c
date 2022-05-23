//"Es de humanos errar"

#include <stdio.h>
const int COSTOHOTDOG = 100u;
const float TOTALBILL = 100.58;

#define PAPERCOST 3
#define PIZZACOST 1.5
const char NEWLINE = '\n';

int main() {
    float costoPizzas; 
    float numberOfSlices = 3;

    costoPizzas = PIZZACOST * numberOfSlices; 
    printf("Total Bill: %c %f", NEWLINE, costoPizzas);

    //return 0; 
}


