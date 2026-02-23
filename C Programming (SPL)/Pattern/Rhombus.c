#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d", &rows);

    // Outer loop to iterate through each row
    for (int i = 0; i < rows; i++)
    {

        // First inner loop to print white spaces
        for (int j = 0; j < rows - i - 1; j++)
            printf(" ");

        // Second inner loop to print * star in each row
        for (int k = 0; k < rows; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

//     * * * * *   |       1 2 3 4 5   |       A B C D E
//    * * * * *    |      1 2 3 4 5    |      A B C D E
//   * * * * *     |     1 2 3 4 5     |     A B C D E
//  * * * * *      |    1 2 3 4 5      |    A B C D E
// * * * * *       |   1 2 3 4 5       |   A B C D E