#include <stdio.h>

int main() {
    float temp;

    printf("Enter body temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp >= 37)
        printf("You have fever");
    else
        printf("No fever");

    return 0;
}
