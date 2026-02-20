#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d", &rows);

    // Outer loop to iterate each row
    for (int i = 0; i < 2 * rows - 1; i++)
    {

        // Assigning comparator
        int comp;
        if (i < rows)
            comp = 2 * i + 1;
        else
            comp = 2 * (2 * rows - i) - 3;

        // First inner loop to print leading spaces
        for (int j = 0; j < comp; j++)
            printf(" ");

        // Second inner loop to print star *
        for (int k = 0; k < 2 * rows - comp; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}