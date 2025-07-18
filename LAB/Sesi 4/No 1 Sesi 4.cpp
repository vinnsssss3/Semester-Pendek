#include <stdio.h>

int main() {
    int angka, jumlahDigit = 0;

    scanf("%d", &angka);

    while (angka != 0) {
        angka /= 10;
        jumlahDigit++;
    }

    printf("Jumlah digit : %d\n", jumlahDigit);

    return 0;
}
