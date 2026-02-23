// Print summation of the following series: 1 + 1/2 +1/3 + 1⁄4+ 1/5 + .... + 1/n where integer n will be input to your program.

#include <stdio.h>
int main() {
    int n, i = 1;
    double sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (i <= n) {
        sum = sum + (1.0 / i);
        i++;
    } 
    printf("Summation of the series is: %.6lf\n", sum);
    return 0;
}

// Enter the value of n: 5
// Summation of the series is: 2.283333