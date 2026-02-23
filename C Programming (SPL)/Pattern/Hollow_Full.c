#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d", &rows);

    // Outer loop to iterate through each loop
    for (int i = 0; i < rows; i++)
    {

        // First inner loop to print leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
            printf(" ");

        // Second inner loop to print stars * and inner whitespaces
        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k == 0 || k == 2 * i || i == rows - 1)
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
// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I