#include <stdio.h>

int main() {
    int year;

    printf("Enter a century year: ");
    scanf("%d", &year);

    if (year % 100 != 0) {
        printf("The given year is not a century year.\n");
    }
    else if (year % 400 == 0) {
        printf("%d is a Leap Year.\n", year);
    }
    else {
        printf("%d is NOT a Leap Year.\n", year);
    }

    return 0;
}
