#include <stdio.h>

int main() {
    int hour24, minute, second;
    int hour12;
    char period[3];

    // Input 24-hour time
    printf("Enter time in 24-hour format (HH MM SS): ");
    scanf("%d %d %d", &hour24, &minute, &second);

    // Validate input
    if (hour24 < 0 || hour24 > 23 || 
        minute < 0 || minute > 59 || 
        second < 0 || second > 59) {
        printf("Invalid time input!\n");
        return 1;
    }

    // Conversion logic
    if (hour24 == 0) {
        hour12 = 12;
        strcpy(period, "AM");
    }
    else if (hour24 < 12) {
        hour12 = hour24;
        strcpy(period, "AM");
    }
    else if (hour24 == 12) {
        hour12 = 12;
        strcpy(period, "PM");
    }
    else {
        hour12 = hour24 - 12;
        strcpy(period, "PM");
    }

    // Display 12-hour format
    printf("12-hour format: %02d:%02d:%02d %s\n",
           hour12, minute, second, period);

    return 0;
}
