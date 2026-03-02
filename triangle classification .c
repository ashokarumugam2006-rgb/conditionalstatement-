#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three side lengths: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if sides are positive
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid input! Sides must be positive.\n");
    }
    // Check triangle validity
    else if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            printf("Triangle is Equilateral\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Triangle is Isosceles\n");
        }
        else {
            printf("Triangle is Scalene\n");
        }
    }
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
