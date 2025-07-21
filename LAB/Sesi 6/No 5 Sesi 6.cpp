#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    if (a % 2 == 0)
        printf("Genap\n");
    else
        printf("Ganjil\n");

    return 0;
}
