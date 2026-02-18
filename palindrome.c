#include <stdio.h>

int main() {
    int number, originalNumber, reversed = 0, remainder;

    printf("Enter a number between 1000 and 9999: ");
    scanf("%d", &number);

    if (number >= 1000 && number <= 9999) {

        originalNumber = number;

        while (number != 0) {
            remainder = number % 10;
            reversed = reversed * 10 + remainder;
            number /= 10;
        }

        if (originalNumber == reversed) {
            printf("The number is a palindrome.\n");
        } else {
            printf("The number is NOT a palindrome.\n");
        }

    } else {
        printf("The number is outside the range 1000 to 9999.\n");
    }

    return 0;
}
