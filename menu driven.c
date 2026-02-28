#include <stdio.h>

#define PI 3.14159

int main() {
    int choice;
    float radius, area;

    printf("=================================\n");
    printf("        AREA CALCULATOR MENU      \n");
    printf("=================================\n");
    printf("1. Calculate Area of Circle\n");
    printf("2. Exit\n");
    printf("=================================\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("\n--- Circle Area Calculation ---\n");
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);

            if(radius <= 0) {
                printf("Invalid radius! Radius must be positive.\n");
            } else {
                area = PI * radius * radius;
                printf("Area of the circle = %.2f\n", area);
            }
            break;

        case 2:
            printf("Thank you! Exiting program.\n");
            break;

        default:
            printf("Invalid choice! Please select a valid option.\n");
    }

    return 0;
}
