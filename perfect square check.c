#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input");
        return 0;
    }

    int root = sqrt(n);

    if (root * root == n)
        printf("Perfect Square");
    else
        printf("Not a Perfect Square");

    return 0;
}
