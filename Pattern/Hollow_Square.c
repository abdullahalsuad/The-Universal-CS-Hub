#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d", &rows);

    // Outer loop to iterator through each row
    for (int i = 0; i < rows; i++)
    {

        // Inner loop to print * star in each row
        for (int j = 0; j < rows; j++)
        {

            // Statement to check boundry condition
            if (i > 0 && i < rows - 1 && j > 0 && j < rows - 1)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}


// * * * * *   |   1 2 3 4 5   |   A B C D E
// *       *   |   1       5   |   A       E
// *       *   |   1       5   |   A       E
// *       *   |   1       5   |   A       E
// * * * * *   |   1 2 3 4 5   |   A B C D E