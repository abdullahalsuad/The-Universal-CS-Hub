// Write a program using a while loop that asks the user how many numbers he/she wants to enter. Your task is to input those many numbers and calculate their sum.

#include <stdio.h>
int main() {
    int count, i = 1,num,sum=0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &count);

    while (i <= count) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum = sum + num;
        i++;
    } 
    printf("The sum of the numbers is: %d\n", sum);
    return 0;
}

// How many numbers do you want to enter? 5
// Enter number 1: 1
// Enter number 2: 2
// Enter number 3: 3
// Enter number 4: 4
// Enter number 5: 5
// The sum of the numbers is: 15