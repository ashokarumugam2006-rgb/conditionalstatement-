#include <stdio.h>

int main() {
    int first = 0, second = 1, next;
    int i;

    printf("Fibonacci sequence up to 20th term (0 to 100):\n");

    for(i = 1; i <= 20; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;

        if(first > 100) {
            break;
        }
    }

    return 0;
}
