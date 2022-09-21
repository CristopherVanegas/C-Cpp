#include <stdio.h>
#include <stdlib.h>

int main()
{
    classChallenge();
    return 0;
}

void classCode() {
    printf("BIDIMENTIONAL ARRAYS!\n");

    int bidimentionalArr[4][4];
    bidimentionalArr[0][0] = 11;
    bidimentionalArr[0][1] = 12;
    bidimentionalArr[0][2] = 13;
    bidimentionalArr[0][3] = 14;

    bidimentionalArr[1][0] = 29;
    bidimentionalArr[1][1] = 28;
    bidimentionalArr[1][2] = 27;
    bidimentionalArr[1][3] = 26;

    bidimentionalArr[2][0] = 39;
    bidimentionalArr[2][1] = 38;
    bidimentionalArr[2][2] = 37;
    bidimentionalArr[2][3] = 36;

    bidimentionalArr[3][0] = 49;
    bidimentionalArr[3][1] = 48;
    bidimentionalArr[3][2] = 47;
    bidimentionalArr[3][3] = 46;


    printf("Valor en (1, 1): %i\n", bidimentionalArr[0][0]);
    printf("Valor en (1, 2): %i\n", bidimentionalArr[0][1]);
    printf("Valor en (2, 1): %i\n", bidimentionalArr[1][0]);
    printf("Valor en (1, 4): %i\n", bidimentionalArr[0][3]);
}

void classChallenge() {
    int bidimentionalArr[3][4];
    bidimentionalArr[0][0] = 1;
    bidimentionalArr[0][1] = 1;
    bidimentionalArr[0][2] = 1;
    bidimentionalArr[0][3] = 1;
    // the sum should be 4

    bidimentionalArr[1][0] = 3;
    bidimentionalArr[1][1] = 3;
    bidimentionalArr[1][2] = 2;
    bidimentionalArr[1][3] = 2;
    // the sum should be 10

    bidimentionalArr[2][0] = 10;
    bidimentionalArr[2][1] = 3;
    bidimentionalArr[2][2] = 10;
    bidimentionalArr[2][3] = 3;
    // the sum should be 26

    int firstRow = bidimentionalArr[0][0] + bidimentionalArr[0][1] + bidimentionalArr[0][2] + bidimentionalArr[0][3];
    int secondRow = bidimentionalArr[1][0] + bidimentionalArr[1][1] + bidimentionalArr[1][2] + bidimentionalArr[1][3];
    int thirdRow = bidimentionalArr[2][0] + bidimentionalArr[2][1] + bidimentionalArr[2][2] + bidimentionalArr[2][3];

    printf("The sum of the first row it's: %i\n", firstRow);
    printf("The sum of the second row it's: %i\n", secondRow);
    printf("The sum of the third row it's: %i\n", thirdRow);

}
