#include <stdio.h>

int main() {
    int bilangan;
    float desimal;

    scanf("%d %f", &bilangan, &desimal);

    printf("Integer: %d\n", bilangan);
    printf("\n");
    printf("Decimal: %.2f\n", desimal);

    return 0;
}
