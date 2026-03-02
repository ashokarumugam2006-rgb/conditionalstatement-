#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age <= 12) {
        printf("Eligible for Child Discount Ticket\n");
    } else {
        printf("Eligible for Regular Ticket\n");
    }

    return 0;
}
