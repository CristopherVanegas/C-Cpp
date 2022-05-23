#include<stdio.h>   // It lets me print sth in the terminal and control inputs and outputs. 
#include<stdlib.h>  // It lets me to maniopulate the enviroment on my machina like the terminal.

int n = -1;

int main() {
    system("clear");
    if(n > 10 && n < 20)
        printf(">>> The number is larger than 10, but less than 20"); 
    else if(n == 10)
        printf(">>> The number is 10");
    else if(n > 20)
        printf(">>> The number is larger than 20");
    else if(n < 10 && n >= 0)
        printf(">>> The number it's found in the range between 0 to 9");
    else
        printf("> error that's not a positive number!");
    
    return 0;
}

