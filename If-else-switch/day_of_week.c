// Create a program that prompts the user to enter a number representing a day of the week (1 for Sunday, 2 for Monday, etc.) prints the name of the corresponding day using a switch-case statement.

#include <stdio.h>
int main() {
    int day;
    
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);
    
    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day number!\n");
    }
    return 0;
}

// Enter a day number (1-7): 3
// Tuesday