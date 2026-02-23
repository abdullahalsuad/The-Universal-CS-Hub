#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d", &rows);
    int n = 1;

    // outer loop to print all rows
    for (int i = 0; i < rows; i++)
    {

        // inner loop to print number in each row
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", n++);
        }
        printf("\n");
    }
    return 0;
}

// 1          |   A
// 2 3        |   B C
// 4 5 6      |   D E F
// 7 8 9 10   |   G H I J