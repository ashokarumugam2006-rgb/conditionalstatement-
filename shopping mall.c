#include <stdio.h>

int main() {
    int pen, notebook, pencil;
    int total;

    printf("Enter quantity of pens, notebooks, pencils: ");
    scanf("%d %d %d", &pen, &notebook, &pencil);

    total = pen * 20 + notebook * 70 + pencil * 9;

    printf("Total Amount = Rs.%d", total);

    return 0;
}
