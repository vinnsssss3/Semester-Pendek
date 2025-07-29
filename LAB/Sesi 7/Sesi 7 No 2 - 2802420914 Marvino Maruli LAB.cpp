#include <stdio.h>

int pangkat(int a, int b) {
    if (b == 0) return 1;
    else return a * pangkat(a, b - 1);
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int hasil = pangkat(a, b);
    printf("%d pangkat %d = %d\n", a, b, hasil);

    return 0;
}
