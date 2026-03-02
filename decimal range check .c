#include <stdio.h>

int main() {
    float num;

    printf("Enter a decimal number: ");
    scanf("%f", &num);

    if (num >= 30.5 && num <= 40.2) {
        printf("The number is within the range (30.5 to 40.2).\n");
    }
    else {
        printf("The number is outside the range (30.5 to 40.2).\n");
    }

    return 0;
}
