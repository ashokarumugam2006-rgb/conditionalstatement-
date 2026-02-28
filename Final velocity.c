#include <stdio.h>

int main() {
    float u, a, t, v;

    printf("Enter initial velocity (u): ");
    scanf("%f", &u);

    printf("Enter acceleration (a): ");
    scanf("%f", &a);

    printf("Enter time (t): ");
    scanf("%f", &t);

    v = u + (a * t);

    printf("Final Velocity (v) = %.2f\n", v);

    return 0;
}
