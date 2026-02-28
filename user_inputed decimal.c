#include <stdio.h>

int main() {
    float num;

    printf("Enter a decimal number: ");
    scanf("%f", &num);

    // Check if number is within range
    if (num >= 25.0 && num <= 50.0) {
        
        // Check if decimal is actually an integer
        if (num == (int)num) {
            printf("The number is an integer within the range 25.0 to 50.0.\n");
        } else {
            printf("The number is within range but NOT an integer.\n");
        }

    } else {
        printf("The number is NOT within the range 25.0 to 50.0.\n");
    }

    return 0;
}
