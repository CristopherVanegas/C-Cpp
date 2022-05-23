#include<stdlib.h>
#include<stdio.h>

int opt = 0, opt_2 = 0;

int main() {
    system("clear");
    printf("Welcome to Platzi Store!\n");
    printf(">>> Option 0 for Platzi Drinks.\n");
    printf(">>> Option 1 for Platzi Food.\n");
    printf(">>> Option 2 for Platzi Desserts\n");
    scanf("%d", &opt);

    switch(opt) {
        case 0:
            printf("> You're in Platzi Drinks!\n");
            scanf("%d", &opt_2);

            switch(opt_2) {
                case 0:
                    printf("|You chose option 0!\n");
                    break;
            }
            break;

        case 1:
            printf("> You're in Platzi Food!\n");
            break;

        case 2: 
            printf("> You're in Plazi Desserts!\n");
            break; 

        default:
            break;
    }
    return 0;
}

