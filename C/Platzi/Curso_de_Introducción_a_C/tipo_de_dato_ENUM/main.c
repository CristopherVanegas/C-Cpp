#include <stdio.h>

enum weekDays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

enum deck {
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15
} card; 

int main() {
    enum weekDays today ; 
    today = Monday;
    printf("Day %d", today+1); 


    card = spades;
    printf("\nCard Power %d", card);
    printf("\nSize of var %d", sizeof(card));
    return 0;

}