// Determine whether an integer input is odd or even

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");   
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return 0;
}

// Enter an integer: 4
// 4 is even.