#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d",&rows);

    // Outer loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // Inner loop to print the * in each row
        for (int j = 0; j < rows - i; j++)
        {
            printf("* ");
            //  printf("%d ", j+1);           // 1 12 123
            //  printf("%c ", 'A'+j);         // A AB ABC
            //  printf("%c ", 'a'+j);         // a ab abc
        }
        printf("\n");
    }
}

// * * * * *   |   1 2 3 4 5   |   A B C D E 
// * * * *     |   1 2 3 4     |   A B C D
// * * *       |   1 2 3       |   A B C
// * *         |   1 2         |   A B
// *           |   1           |   A