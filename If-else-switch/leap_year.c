// Write a program that checks whether a particular year is a leap year or not. To determine whether a year is a leap year or not, use the following rule. A leap year must satisfy any or both of the following 
// conditions: ● Divisible by 400 ● Divisible by 4 and not divisible by 100

#include <stdio.h>
int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

// Enter a year: 2000
// 2000 is a leap year.