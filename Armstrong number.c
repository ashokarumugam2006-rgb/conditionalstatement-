#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    printf("Enter a number between 100 and 999: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Number is out of range.\n");
        return 0;
    }

    original = num;

    while (num != 0) {
        remainder = num % 10;          // Get last digit
        result += remainder * remainder * remainder;  // Cube of digit
        num /= 10;                     // Remove last digit
    }

    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}
