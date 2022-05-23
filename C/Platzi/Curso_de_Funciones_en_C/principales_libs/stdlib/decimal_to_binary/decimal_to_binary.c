// First step: Divide the value by 2 and storage the reminder or mod in an array. 
// Second step: Divide by two and storage the reminder.
// Repeat until the number won't be able to be divided.

#include<stdio.h>
#include<stdlib.h>

int binary_array_n[12], decimalN, i;

int main() {
    system("clear");
    system("color 9F");
    printf(">>> Insert the decimal number to convert:\n");
    scanf("%d", &decimalN);
    printf(">>> You are going to convert the decimal number %d to a binary.\n", decimalN);

    for(i = 0; decimalN > 0; i++) {
        binary_array_n[i] = decimalN%2;
        decimalN = decimalN/2;   
    }

    printf(">>> The convertion is:\n");
    for(i = i-1; i >= 0; i--) {
        printf("%d", binary_array_n[i]);
    }

    return 0;
}

