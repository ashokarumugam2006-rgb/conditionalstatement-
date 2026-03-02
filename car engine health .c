#include <stdio.h>

int main() {
    float temperature, oilPressure;
    int rpm;

    printf("Enter Engine Temperature (°C): ");
    scanf("%f", &temperature);

    printf("Enter Oil Pressure (psi): ");
    scanf("%f", &oilPressure);

    printf("Enter Engine RPM: ");
    scanf("%d", &rpm);

    if (temperature >= 70 && temperature <= 100 &&
        oilPressure >= 20 && oilPressure <= 80 &&
        rpm >= 700 && rpm <= 3000) {
        
        printf("Engine Status: Healthy\n");
    }
    else {
        printf("Engine Status: Warning!\n");

        if (temperature < 70)
            printf("- Engine temperature too low.\n");
        else if (temperature > 100)
            printf("- Engine overheating.\n");

        if (oilPressure < 20)
            printf("- Oil pressure too low.\n");
        else if (oilPressure > 80)
            printf("- Oil pressure too high.\n");

        if (rpm < 700)
            printf("- RPM too low.\n");
        else if (rpm > 3000)
            printf("- RPM too high.\n");
    }

    return 0;
}
