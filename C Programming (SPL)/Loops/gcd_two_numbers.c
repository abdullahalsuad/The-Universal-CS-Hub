// Write a program to find the GCD (Greatest Common Divisor) of two positive integer inputs.
// Enter two integers: 45 120
// GCD: 15

#include <stdio.h>
int main() {
    int a, b, temp;
  
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
  
    int num1 = a, num2 = b;
    while (b != 0) {
    temp = b; 
    b = a % b; 
    a = temp; 
    } 
    printf("GCD: %d\n", a); 
    return 0;
}

// Enter two integers: 45 120
// GCD: 15