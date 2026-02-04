#include <stdio.h>

int main() {
    int a = 10, b = 25, c = 15;

    if (a >= b && a >= c) {
        printf("%d is greatest", a);
    } else if (b >= a && b >= c) {
        printf("%d is greatest", b);
    } else {
        printf("%d is greatest", c);
    }

    return 0;
}
