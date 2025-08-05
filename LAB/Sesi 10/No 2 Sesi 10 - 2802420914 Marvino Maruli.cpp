#include <stdio.h>

struct Alamat {
    char jalan[50];
    char kota[30];
    int kode_pos;
};

struct Mahasiswa {
    char nim[20];
    char nama[30];
    struct Alamat alamat;
};

int main() {
    struct Mahasiswa m;

    printf("NIM: ");
    scanf(" %[^\n]", m.nim);

    printf("Nama: ");
    scanf(" %[^\n]", m.nama);

    printf("Jalan: ");
    scanf(" %[^\n]", m.alamat.jalan);

    printf("Kota: ");
    scanf(" %[^\n]", m.alamat.kota);

    printf("Kode Pos: ");
    scanf("%d", &m.alamat.kode_pos);

    printf("\nData Mahasiswa:\n");
    printf("NIM: %s\n", m.nim);
    printf("Nama: %s\n", m.nama);
    printf("Alamat: %s, %s, %d\n", m.alamat.jalan, m.alamat.kota, m.alamat.kode_pos);

    return 0;
}
