#include <stdio.h>
#include <stdlib.h>

int Addition(int a, int b)
{
    int r;

    r = a + b;
    return r;
}

int main()
{
    printf("Functions!\n");
    int addition = Addition(3, 5);
    printf("The addition result is: %i", addition);
    return 0;
}
