#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d", &rows);

    // Outer loop to iterate through each row
    for (int i = 0; i < 2 * rows - 1; i++)
    {

        // assigning values to the comparator according to the row number
        int comp;
        if (i < rows)
            comp = 2 * (rows - i) - 1;
        else
            comp = 2 * (i - rows + 1) + 1;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++)
            printf(" ");

        // Second inner loop to print stars *
        for (int k = 0; k < 2 * n - comp; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

//         *           |           1           |           A
//       * * *         |         1 2 3         |         A B C
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
//   * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//     * * * * *       |       1 2 3 4 5       |       A B C D E
//       * * *         |         1 2 3         |         A B C
//         *           |           1           |           A