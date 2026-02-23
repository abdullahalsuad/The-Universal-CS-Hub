// Write a program that will take a positive integer as input and will check whether it is a palindrome or not. If the input is 121, then it is a palindrome. If the input is 123, then it is not a palindrome.

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
    
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
    
    return 0;
}

// Enter a positive integer: 121
// 121 is a palindrome.
