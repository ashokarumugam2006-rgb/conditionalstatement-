#include <stdio.h>

int main() {
    float number;

    printf("Enter a decimal number: ");
    scanf("%f", &number);

    if (number >= 30.5 && number <= 40.2) {
        printf("The number is within the range 30.5 to 40.2.\n");
    } else {
        printf("The number is NOT within the range 30.5 to 40.2.\n");
    }

    return 0;
}
