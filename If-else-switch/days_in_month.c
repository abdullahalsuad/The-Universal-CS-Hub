// Write a program that prompts the user to enter a month number (1 for January, 2 for February, etc.) and prints the number of days in that month using a switch-case statement. Consider leap years for February.

#include <stdio.h>
int main() {
    int month, year;
    
    printf("Enter a month number (1-12): ");
    scanf("%d", &month);
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days: 31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days: 30\n");
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                printf("Number of days: 29 (Leap Year)\n");
            } else {
                printf("Number of days: 28\n");
            }
            break;
        default:
            printf("Invalid month number!\n");
    }
    return 0;
}

// Enter a month number (1-12): 2
// Enter a year: 2024
// Number of days: 29 (Leap Year)