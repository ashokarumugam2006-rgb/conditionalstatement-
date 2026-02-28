#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (1 to 1024): ");
    scanf("%d", &num);

    // Check range
    if (num < 1 || num > 1024) {
        printf("Number is out of range!\n");
    }
    else {
        // Check power of two
        if ((num & (num - 1)) == 0) {
            printf("%d is a power of two.\n", num);
        } else {
            printf("%d is NOT a power of two.\n", num);
        }
    }

    return 0;
}
