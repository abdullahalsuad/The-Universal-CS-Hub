#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d",&rows);

    // Upper part
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("* ");
            // printf("%d ", j+1);           // 1 12 123
            // printf("%c ", 'A'+j);         // A AB ABC
            // printf("%c ", 'a'+j);         // a ab abc
        }
        printf("\n");
    }

    // Lower part
    for(int i = rows - 1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
            // printf("%d ", j+1);           // 1 12 123
            // printf("%c ", 'A'+j);         // A AB ABC
            // printf("%c ", 'a'+j);         // a ab abc
        }
        printf("\n");
    }

    return 0;
}


// *           | 1           | A
// * *         | 1 2         | A B
// * * *       | 1 2 3       | A B C
// * * * *     | 1 2 3 4     | A B C D
// * * *       | 1 2 3       | A B C
// * *         | 1 2         | A B
// *           | 1           | A