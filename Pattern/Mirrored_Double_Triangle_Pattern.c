#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the value of rows:\n");
    scanf("%d",&rows);

    // Upper part (mirrored)
    for(int i = 0; i < rows; i++)
    {
        // Leading spaces
        for(int s = 0; s < rows - i - 1; s++)
            printf("  ");  // 2 spaces for proper alignment

        // Actual content
        for(int j = 0; j <= i; j++)
        {
            printf("* ");           // Stars
            // printf("%d ", j+1);  // Numbers
            // printf("%c ", 'A'+j);// Letters
        }
        printf("\n");
    }

    // Lower part (mirrored)
    for(int i = rows - 2; i >= 0; i--)
    {
        // Leading spaces
        for(int s = 0; s < rows - i - 1; s++)
            printf("  ");  // 2 spaces for alignment

        // Actual content
        for(int j = 0; j <= i; j++)
        {
            printf("* ");           // Stars
            // printf("%d ", j+1);  // Numbers
            // printf("%c ", 'A'+j);// Letters
        }
        printf("\n");
    }

    return 0;
}



//         *            
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 