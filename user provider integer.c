#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer between 200 and 500: ");
    scanf("%d", &number);

    if (number >= 200 && number <= 500) {
        if (number % 7 == 0 && number % 11 == 0) {
            printf("The number is divisible by both 7 and 11.\n");
        } else {
            printf("The number is NOT divisible by both 7 and 11.\n");
        }
    } else {
        printf("The number is outside the range of 200 to 500.\n");
    }

    return 0;
}
