// Write a program that will take a positive integer as input and will display the sum of all the digits as
// output. If the input is 135, then your program should display 9

#include <stdio.h>
int main() {
    int num, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int originalNum = num;
    
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("The sum of the digits of %d is: %d\n", originalNum, sum);
    return 0;
}

// Enter a positive integer: 135
// The sum of the digits of 135 is: 9
