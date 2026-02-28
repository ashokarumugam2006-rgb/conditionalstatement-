#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check range
    if (num >= 200 && num <= 800) {
        
        // Check divisibility conditions
        if (num % 4 == 0 && num % 6 == 0 && num % 8 != 0) {
            printf("The number satisfies all the conditions.\n");
        } else {
            printf("The number does NOT satisfy the divisibility conditions.\n");
        }

    } else {
        printf("The number is not in the range of 200 to 800.\n");
    }

    return 0;
}
