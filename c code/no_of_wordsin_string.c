#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str);

    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }
    printf("Number of words: %d\n", count);
    return 0;
}
