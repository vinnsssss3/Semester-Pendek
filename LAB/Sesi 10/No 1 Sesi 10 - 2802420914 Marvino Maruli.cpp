#include <stdio.h>

struct Buku {
    char judul[50];
    char penulis[30];
    int tahun_terbit;
    float harga;
};

int main() {
    struct Buku b;

    printf("Judul: ");
    scanf(" %[^\n]", b.judul);  

    printf("Penulis: ");
    scanf(" %[^\n]", b.penulis);

    printf("Tahun Terbit: ");
    scanf("%d", &b.tahun_terbit);

    printf("Harga: ");
    scanf("%f", &b.harga);

    printf("\nData Buku:\n");
    printf("Judul: %s", b.judul);
    printf("\n");
    printf("Penulis: %s", b.penulis);
    printf("\n");
    printf("Tahun: %d", b.tahun_terbit);
    printf("\n");
    printf("Harga: Rp %.2f", b.harga);

    return 0;
}
