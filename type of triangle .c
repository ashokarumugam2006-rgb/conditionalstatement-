#include <stdio.h>

int main() {
    int a, b, c, sum;

    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    if (sum != 180 || a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid\n");
    } 
    else {
        if (a == 90 || b == 90 || c == 90) {
            printf("Right Triangle\n");
        }
        else if (a > 90 || b > 90 || c > 90) {
            printf("Obtuse Triangle\n");
        }
        else {
            printf("Acute Triangle\n");
        }
    }

    return 0;
}
