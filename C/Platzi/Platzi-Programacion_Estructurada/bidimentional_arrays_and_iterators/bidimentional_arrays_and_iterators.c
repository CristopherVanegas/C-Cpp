#include <stdio.h>
#include <stdlib.h>

int main()
{
    exercise();

    return 0;
}

void exercise()
{
    int m, n, a, p;
    m = 5;
    n = 6;
    int matrix[5][6];

    matrix[0][0] = 6;
    matrix[0][1] = 7;
    matrix[0][2] = 8;
    matrix[0][3] = 9;
    matrix[0][4] = 10;

    matrix[1][0] = 10;
    matrix[1][1] = 5;
    matrix[1][2] = 6;
    matrix[1][3] = 8;
    matrix[1][4] = 6;

    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;
    matrix[2][3] = 10;
    matrix[2][4] = 7;

    matrix[3][0] = 5;
    matrix[3][1] = 5;
    matrix[3][2] = 5;
    matrix[3][3] = 8;
    matrix[3][4] = 9;

    matrix[4][0] = 10;
    matrix[4][1] = 8;
    matrix[4][2] = 9;
    matrix[4][3] = 5;
    matrix[4][4] = 7;

    matrix[0][5] = 0;
    matrix[1][5] = 0;
    matrix[2][5] = 0;
    matrix[3][5] = 0;
    matrix[4][5] = 0;

    // printf("%i", matrix[4][6]);

    // promedios
    for (int i = 0; i < m; i++) // row
    {
        a = 0;
        for (int j = 0; j < n - 1; j++) // columns
        {
            a = a + matrix[i][j];
        }
        p = a / (n - 1);

        printf("%i es el promedio de la fila %i \n", p, i + 1);
        matrix[i][n-1] = p;
    }

    for (int i = 0; i < 5; i++) {
        printf("  |");
        for (int j = 0; j < 6; j++) {
            printf("  %i  ", matrix[i][j]);

            if (j == 5) {
                printf("|  \n");
            }
        }
    }
}

int classExercise()
{
    printf("Arreglos bidimensionales e iteradores\n");

    int IntegerArray[4][5];
    for (int i = 0; i < 4; i++)
    { // row
        for (int j = 0; j < 5; j++)
        { // columns
            IntegerArray[i][j] = ((i + j) * 100 + j);
            printf("(%i, %i): %i \n", i, j, IntegerArray[i][j]);
        }
    }

    return 0;
}
