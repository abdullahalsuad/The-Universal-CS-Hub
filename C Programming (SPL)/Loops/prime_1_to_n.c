// Write a program that will take a positive integer as input and will display all the prime numbers between 1 to that integer. If the input is 10, then your program should display 2, 3, 5, 7.

#include <stdio.h>
int main() {
    int num, i, j, isPrime;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are: ", num);

    for (i = 2; i <= num; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

// Enter a positive integer: 10
// Prime numbers between 1 and 10 are: 2 3 5 7 
