// Write a program that calculates the factorial of number N using a while loop and prints the value.

#include <stdio.h>
int main() {
    int n, i = 1;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n) {
        fact = fact * i;
        i++;
    } 
    printf("Factorial of %d = %lld\n", n, fact);
    return 0;
}

// Enter a number: 4
// Factorial of 4 = 24