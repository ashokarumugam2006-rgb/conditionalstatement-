#include <stdio.h>

int main() {
    int age;
    char gender;
    float dailyWage = 0;

    printf("Enter employee age: ");
    scanf("%d", &age);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    // Validate age
    if (age < 18) {
        printf("Employee is not eligible for construction work.\n");
        return 1;
    }

    // Wage calculation
    if (gender == 'M' || gender == 'm') {
        if (age >= 18 && age <= 30)
            dailyWage = 700;
        else if (age >= 31 && age <= 50)
            dailyWage = 800;
        else
            dailyWage = 600;
    }
    else if (gender == 'F' || gender == 'f') {
        if (age >= 18 && age <= 30)
            dailyWage = 650;
        else if (age >= 31 && age <= 50)
            dailyWage = 750;
        else
            dailyWage = 550;
    }
    else {
        printf("Invalid gender input!\n");
        return 1;
    }

    printf("Daily Wage: Rs. %.2f\n", dailyWage);

    return 0;
}
