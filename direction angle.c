#include <stdio.h>

int main() {
    float angle;

    printf("Enter an angle in degrees: ");
    scanf("%f", &angle);

    // Normalize angle to range 0–359
    angle = (int)angle % 360;

    if (angle < 0) {
        angle += 360;   // Handle negative angles
    }

    if (angle == 0) {
        printf("Direction: East\n");
    }
    else if (angle == 90) {
        printf("Direction: North\n");
    }
    else if (angle == 180) {
        printf("Direction: West\n");
    }
    else if (angle == 270) {
        printf("Direction: South\n");
    }
    else {
        printf("The angle does not represent a main compass direction (E, N, W, S).\n");
    }

    return 0;
}
