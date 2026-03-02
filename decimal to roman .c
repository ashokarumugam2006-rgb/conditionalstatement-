#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (1 to 50): ");
    scanf("%d", &num);

    if (num < 1 || num > 50) {
        printf("Invalid input! Please enter a number between 1 and 50.\n");
        return 0;
    }

    printf("Roman Numeral: ");

    while (num >= 50) {
        printf("L");
        num -= 50;
    }
    while (num >= 40) {
        printf("XL");
        num -= 40;
    }
    while (num >= 10) {
        printf("X");
        num -= 10;
    }
    while (num >= 9) {
        printf("IX");
        num -= 9;
    }
    while (num >= 5) {
        printf("V");
        num -= 5;
    }
    while (num >= 4) {
        printf("IV");
        num -= 4;
    }
    while (num >= 1) {
        printf("I");
        num -= 1;
    }

    printf("\n");

    return 0;
}
