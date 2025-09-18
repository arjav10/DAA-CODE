/*Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isupper(ch)) {
        printf("The character '%c' is an uppercase alphabet.\n", ch);
    } else if (islower(ch)) {
        printf("The character '%c' is a lowercase alphabet.\n", ch);
    } else if (isdigit(ch)) {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}
