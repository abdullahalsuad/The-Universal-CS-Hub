// Take an integer n as input from the user. Write a program that displays the Fibonacci series up to n
// term. In the Fibonacci series, the first two numbers are 0 and 1. The remaining numbers are the sum of
// the previous two. Enter a number: 10The first 8 Fibonacci numbers are: 0 1 1 2 3 5 8 13 21 34

#include <stdio.h>
int main() {
    int n, i = 1, t1 = 0, t2 = 1;
    int nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    while (i <= n) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }
    printf("\n");
    return 0;
}

// Enter the number of terms: 4
// Fibonacci Series: 0 1 1 2