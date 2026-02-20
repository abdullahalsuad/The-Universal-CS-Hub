#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d",&rows);

    // This loop for traverse pyramid from top to bottom
    for (int i = 0; i < rows; i++)
    {

        // This loop for printing leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }

        // This loop for printing * character in each row
        for (int k = 0; k <= i; k++)
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


//         *    |            1    |            A
//       * *    |          1 2    |          A B
//     * * *    |        1 2 3    |        A B C
//   * * * *    |      1 2 3 4    |      A B C D
// * * * * *    |    1 2 3 4 5    |    A B C D E