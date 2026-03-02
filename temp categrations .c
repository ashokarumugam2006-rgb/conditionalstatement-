#include <stdio.h>

int main() {
    int temp;

    printf("Enter the temperature: ");
    scanf("%d", &temp);

    if (temp >= -20 && temp <= 0) {
        printf("Very Cold\n");
    }
    else if (temp >= 1 && temp <= 10) {
        printf("Cold\n");
    }
    else if (temp >= 11 && temp <= 20) {
        printf("Mild\n");
    }
    else if (temp >= 21 && temp <= 30) {
        printf("Warm\n");
    }
    else if (temp >= 31 && temp <= 40) {
        printf("Hot\n");
    }
    else if (temp >= 41 && temp <= 50) {
        printf("Very Hot\n");
    }
    else {
        printf("Temperature out of specified range (-20 to 50).\n");
    }

    return 0;
}
