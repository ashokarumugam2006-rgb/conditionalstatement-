#include <stdio.h>

int main() {
    int maths, physics, chemistry, total;

    printf("Enter marks in Maths, Physics, Chemistry: ");
    scanf("%d %d %d", &maths, &physics, &chemistry);

    total = maths + physics + chemistry;

    if (maths >= 50 && physics >= 45 && chemistry >= 45 && total >= 180) {
        printf("Eligible for Admission");
    }
    else {
        printf("Not Eligible for Admission");
    }

    return 0;
}
