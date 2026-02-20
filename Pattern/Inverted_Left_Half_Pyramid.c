#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d", &rows);

    // Outer loop for printing all rows
    for (int i = 0; i < rows; i++)
    {

        // First Inner loop for printing white spaces
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        // Second inner loop for printing star *
        for (int k = 0; k < rows - i; k++)
        {
            printf("* ");
            // printf("%d ", k+1);           // 1 12 123
            // printf("%c ", 'A'+k);         // A AB ABC
            // printf("%c ", 'a'+k);         // a ab abc
        }
        printf("\n");
    }

    return 0;
}

// * * * * *    |    1 2 3 4 5    |    A B C D E
//   * * * *    |      1 2 3 4    |      A B C D
//     * * *    |        1 2 3    |        A B C
//       * *    |          1 2    |          A B
//         *    |            1    |            A