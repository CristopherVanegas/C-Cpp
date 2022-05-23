#include<stdio.h>
#include<time.h>

time_t seconds; //Type definition de segundos, estructura de tipo long, devuelve segundos.
time_t hours; 

int main() {
    seconds = time(NULL); // time(NULL); me devuelve el tiempo actual desde EPOCH en UNIX seconds.
    hours = seconds/3600;
    printf("El numero de horas desde EPOCH (1ro de Enero de 1970 a las 00:00) es: %ld \n", hours);
    return 0;
}
