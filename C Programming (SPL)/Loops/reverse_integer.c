// Write a program that will take a positive integer as input and will display the reverse of that integer as output. If the input is 123, then your program should display 321.

#include <stdio.h>
int main() {
    int num, digit, reversedNum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int originalNum = num;
    
    while (num > 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    printf("The reverse of %d is: %d\n", originalNum, reversedNum);
    return 0;
}

// Enter a positive integer: 123
// The reverse of 123 is: 321