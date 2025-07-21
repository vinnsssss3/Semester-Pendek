#include <stdio.h>

int main() {
    char nama[50];
    int usia;

    printf("Nama : ");
    scanf("%s", nama);

    printf("Usia : ");
    scanf("%d", &usia);

    printf("Nama saya %s, usia saya %d tahun\n", nama, usia);
    return 0;
}
