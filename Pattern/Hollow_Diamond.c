#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d", &rows);

    // Outer loop to iterator through each row
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

        // Second inner loop to print star * and inner whitespaces
        for (int k = 0; k < 2 * n - comp; k++)
        {
            if (k == 0 || k == 2 * n - comp - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}   


//         *           |           1           |           A
//       *   *         |         1   3         |         A   C
//     *       *       |       1       5       |       A       E
//   *           *     |     1           7     |     A           G
// *               *   |   1               9   |   A               I
//   *           *     |     1           7     |     A           G
//     *       *       |       1       5       |       A       E
//       *   *         |         1   3         |         A   C
//         *           |           1           |           A