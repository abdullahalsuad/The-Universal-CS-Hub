#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d", &rows);

    // This loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // Inner loop 1 to print white spaces for each row
        for (int j = 0; j < rows - i; j++)
        {
            printf("--");
        }

        // Inner loop 2 to print star (*) character for each row
        for (int k = 0; k < 2 * i + 1; k++)
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

//          *           |           1           |           A
//        * * *         |         1 2 3         |         A B C
//      * * * * *       |       1 2 3 4 5       |       A B C D E
//    * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//  * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I