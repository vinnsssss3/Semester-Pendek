#include <stdio.h>

long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    scanf("Angka: %d", &num);
    printf("Faktorial %d = %ld\n", num, factorial(num));
    return 0;
}
