#include <stdio.h>

int main() {
    int degree;

    printf("Enter the degree (0 - 360): ");
    scanf("%d", &degree);

    if (degree < 0 || degree > 360) {
        printf("Invalid input! Please enter degree between 0 and 360.\n");
    }
    else if ((degree >= 315 && degree <= 360) || (degree >= 0 && degree <= 44)) {
        printf("Direction: North\n");
    }
    else if (degree >= 45 && degree <= 134) {
        printf("Direction: East\n");
    }
    else if (degree >= 135 && degree <= 224) {
        printf("Direction: South\n");
    }
    else if (degree >= 225 && degree <= 314) {
        printf("Direction: West\n");
    }

    return 0;
}
