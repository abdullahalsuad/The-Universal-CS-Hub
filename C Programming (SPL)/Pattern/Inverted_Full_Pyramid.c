#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d", &rows);

    // Outer loop for printing all rows
    for (int i = 0; i < rows; i++)
    {

        // First inner loop printing leading white spaces
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        // Second inner loop printing stars *
        for (int k = 0; k < 2 * (rows - i) - 1; k++)
        {
            printf("* ");
            // printf("%d ", k+1);           // 1 12 123
            // printf("%c ", 'A'+k);         // A AB ABC
            // printf("%c ", 'a'+k);         // a ab abc
        }
        printf("\n");
    }
}

// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//       * * *         |         1 2 3         |         A B C
//         *           |           1           |           A