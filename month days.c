#include <stdio.h>

int main() {
    int month, year;

    // Ask user for month number
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Check month and print month name + days
    switch(month) {

        case 1:
            printf("January has 31 days.\n");
            break;

        case 2:
            printf("Enter year: ");
            scanf("%d", &year);

            // Leap year calculation
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("February has 29 days (Leap Year).\n");
            } else {
                printf("February has 28 days.\n");
            }
            break;

        case 3:
            printf("March has 31 days.\n");
            break;

        case 4:
            printf("April has 30 days.\n");
            break;

        case 5:
            printf("May has 31 days.\n");
            break;

        case 6:
            printf("June has 30 days.\n");
            break;

        case 7:
            printf("July has 31 days.\n");
            break;

        case 8:
            printf("August has 31 days.\n");
            break;

        case 9:
            printf("September has 30 days.\n");
            break;

        case 10:
            printf("October has 31 days.\n");
            break;

        case 11:
            printf("November has 30 days.\n");
            break;

        case 12:
            printf("December has 31 days.\n");
            break;

        default:
            printf("Invalid month number! Please enter between 1 and 12.\n");
    }

    return 0;
}
