#include <stdio.h>

int main() {
    int num, lastDigit;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    lastDigit = num % 10;

    printf("Last digit is: %d\n", lastDigit);

    if (lastDigit % 4 == 0 && lastDigit % 2 == 0) {
        // Divisible by both 2 and 4
        printf("Pattern 1 (Divisible by both 2 and 4):\n");
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if (lastDigit % 2 == 0) {
        // Divisible only by 2
        printf("Pattern 2 (Divisible only by 2):\n");
        for (int i = 4; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                printf("# ");
            }
            printf("\n");
        }
    }
    else {
        // Not divisible by 2
        printf("Pattern 3 (Not divisible by 2 or 4):\n");
        for (int i = 1; i <= 4; i++) {
            printf("@ @ @ @\n");
        }
    }

    return 0;
}
