#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    // Input basic salary
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Condition for allowances
    if (basic <= 70000) {
        hra = basic * 0.30;   // 30% HRA
        da  = basic * 0.80;   // 80% DA
    }

    // Gross salary calculation
    gross = basic + hra + da;

    // Output results
    printf("\nBasic Salary: %.2f", basic);
    printf("\nHRA (30%%): %.2f", hra);
    printf("\nDA (80%%): %.2f", da);
    printf("\nGross Salary: %.2f", gross);

    return 0;
}
