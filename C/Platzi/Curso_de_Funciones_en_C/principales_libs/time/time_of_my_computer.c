#include<stdio.h>
#include<time.h>

time_t begin, end; //Type definition de segundos, estructura de tipo long, devuelve segundos.

int main() {
    long i;
    begin = time(NULL);
    for(i = 0; i < 60000000000; i++);
    end = time(NULL);
    printf("El tiempo que duro nuestro for es: %f\n", difftime(end, begin));
    return 0;
}

