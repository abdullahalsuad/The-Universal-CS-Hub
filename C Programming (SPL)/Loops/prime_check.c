// Write a program that will take a positive integer as input and will check whether it is a prime number or not. If the input is 7, then it is a prime number. If the input is 6, then it is not a prime number.

#include <stdio.h>
int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

// Enter a positive integer: 7
// 7 is a prime number.
