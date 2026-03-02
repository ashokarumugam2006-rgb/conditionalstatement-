#include <stdio.h>

int main() {
    int choice;

    printf("Weather Identification Program\n");
    printf("1. Sunny\n");
    printf("2. Cloudy\n");
    printf("3. Rainy\n");
    printf("4. Stormy\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Weather is Sunny\n");
            break;
        case 2:
            printf("Weather is Cloudy\n");
            break;
        case 3:
            printf("Weather is Rainy\n");
            break;
        case 4:
            printf("Weather is Stormy\n");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}
