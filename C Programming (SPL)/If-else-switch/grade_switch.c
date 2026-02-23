// Write a program that takes a numerical grade input from the user (e.g., 1-100) and prints the corresponding letter grade using a switch-case statement. For example, if the input is 85, the output should be "Grade A".

#include <stdio.h>
int main() {
    int grade;
    
    printf("Enter your grade (1-100): ");
    scanf("%d", &grade);
    
    switch (grade / 10) {
        case 10:
        case 9:
            printf("Grade A\n");
            break;
        case 8:
            printf("Grade B\n");
            break;
        case 7:
            printf("Grade C\n");
            break;
        case 6:
            printf("Grade D\n");
            break;
        default:
            printf("Grade F\n");
    }
    return 0;
}

// Enter your grade (1-100): 85
// Grade B