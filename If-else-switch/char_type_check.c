// Write a program to check and output whether a char input is a digit, uppercase letter, or lowercase letter. Use the following information: 
// ● Digit: 0-9: ASCII value (48-57) 
// ● Uppercase alphabet: A-Z: ASCII value (65-90) 
// ● Lowercase alphabet: a-z: ASCII value (97-122)

#include <stdio.h>  
int main() {
    char ch;    
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    } else {
        printf("%c is not a digit or letter.\n", ch);
    }
    return 0;
}

// Enter a character: 5
// 5 is a digit.