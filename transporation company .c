#include <stdio.h>

int main() {
    int startHour, startMin, endHour, endMin;
    int startTotalMin, endTotalMin, durationMin;
    int hours, minutes;

    printf("=====================================\n");
    printf("        TRIP DURATION CALCULATOR     \n");
    printf("=====================================\n");

    printf("Enter Start Time (HH MM): ");
    scanf("%d %d", &startHour, &startMin);

    printf("Enter End Time (HH MM): ");
    scanf("%d %d", &endHour, &endMin);

    // Convert both times into total minutes
    startTotalMin = startHour * 60 + startMin;
    endTotalMin = endHour * 60 + endMin;

    // If trip crosses midnight
    if (endTotalMin < startTotalMin) {
        endTotalMin += 24 * 60;
    }

    durationMin = endTotalMin - startTotalMin;

    hours = durationMin / 60;
    minutes = durationMin % 60;

    printf("\nTrip Duration: %d hours and %d minutes\n", hours, minutes);

    return 0;
}
