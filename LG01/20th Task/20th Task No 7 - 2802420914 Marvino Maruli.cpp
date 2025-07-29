#include <stdio.h>

union U {
    unsigned int num;
    unsigned char byte[4];
};

int main() {
    union U data;

    printf("Masukkan angka (0 - 4294967295): ");
    scanf("%u", &data.num);

    printf("Hexadecimal: ");
    for (int i = 3; i >= 0; i--) {
        printf("%02X ", data.byte[i]);
    }

    return 0;
}
