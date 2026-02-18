#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);   // Space before %c ignores any leftover whitespace

    if (ch >= 97 && ch <= 122) {
        printf("The character '%c' is a lowercase letter.\n", ch);
    } else {
        printf("The character '%c' is NOT a lowercase letter in the ASCII range 97 to 122.\n", ch);
    }

    return 0;
}
