#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Buku {
    char judul[50];
    char penulis[30];
    int tahun;
};

void tambahBuku() {
    FILE *fp = fopen("buku.dat", "ab");
    struct Buku b;

    printf("\nJudul Buku   : ");
    getchar(); 
    fgets(b.judul, sizeof(b.judul), stdin);
    b.judul[strcspn(b.judul, "\n")] = '\0';

    printf("Penulis      : ");
    fgets(b.penulis, sizeof(b.penulis), stdin);
    b.penulis[strcspn(b.penulis, "\n")] = '\0';

    printf("Tahun Terbit : ");
    scanf("%d", &b.tahun);

    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);

    printf("\nBuku berhasil ditambahkan!\n");
}

void tampilkanBuku() {
    FILE *fp = fopen("buku.dat", "rb");
    struct Buku b;
    int i = 1;

    if (fp == NULL) {
        printf("\nBelum ada data buku.\n");
        return;
    }

    printf("\n=== Daftar Buku ===\n");
    while (fread(&b, sizeof(b), 1, fp)) {
        printf("%d. %s | %s | %d\n", i, b.judul, b.penulis, b.tahun);
        i++;
    }
    fclose(fp);
}

void cariBuku() {
    FILE *fp = fopen("buku.dat", "rb");
    struct Buku b;
    char cari[50];
    int ketemu = 0;

    if (fp == NULL) {
        printf("\nBelum ada data buku.\n");
        return;
    }

    printf("\nMasukkan judul yang dicari: ");
    getchar();
    fgets(cari, sizeof(cari), stdin);
    cari[strcspn(cari, "\n")] = '\0';

    while (fread(&b, sizeof(b), 1, fp)) {
        if (strcasecmp(b.judul, cari) == 0) {
            printf("\nBuku ditemukan!\n");
            printf("%s | %s | %d\n", b.judul, b.penulis, b.tahun);
            ketemu = 1;
            break;
        }
    }
    if (!ketemu) {
        printf("\nBuku tidak ditemukan.\n");
    }
    fclose(fp);
}

void urutkanBuku() {
    FILE *fp = fopen("buku.dat", "rb");
    struct Buku arr[100], temp;
    int n = 0, i, j;

    if (fp == NULL) {
        printf("\nBelum ada data buku.\n");
        return;
    }

    while (fread(&arr[n], sizeof(struct Buku), 1, fp)) {
        n++;
    }
    fclose(fp);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].tahun > arr[j + 1].tahun) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n=== Daftar Buku Terurut (Tahun) ===\n");
    for (i = 0; i < n; i++) {
        printf("%d. %s | %s | %d\n", i + 1, arr[i].judul, arr[i].penulis, arr[i].tahun);
    }
}

int main() {
    int pilihan;

    do {
        printf("\n=== MENU PERPUSTAKAAN MINI ===\n");
        printf("1. Tambah Buku\n");
        printf("2. Tampilkan Buku\n");
        printf("3. Cari Buku\n");
        printf("4. Urutkan Buku\n");
        printf("5. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: tambahBuku(); break;
            case 2: tampilkanBuku(); break;
            case 3: cariBuku(); break;
            case 4: urutkanBuku(); break;
            case 5: printf("\nTerima kasih!\n"); break;
            default: printf("\nPilihan tidak valid.\n");
        }
    } while (pilihan != 5);

    return 0;
}
