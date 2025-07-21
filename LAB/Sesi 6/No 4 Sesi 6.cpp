#include <stdio.h>

int main() {
    int a, b, hasil;

    printf("A : ");
    scanf("%d", &a);
    printf("B : ");
    scanf("%d", &b);

    hasil = (a + b) * (a + b) - (a - b) * (a - b);

    printf("%d\n", hasil);
    return 0;
}
