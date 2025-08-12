#include <stdio.h>

typedef struct {
    char nim[20];
    char nama[50];
} Mahasiswa;

int main() {
    Mahasiswa m;
    FILE *fp;

    printf("Masukkan NIM  : ");
    scanf(" %[^\n]", m.nim);
    printf("Masukkan Nama : ");
    scanf(" %[^\n]", m.nama);

    fp = fopen("mahasiswa.txt", "a");
    if (!fp) {
        printf("Gagal membuka file!\n");
        return 1;
    }
    fprintf(fp, "%s|%s\n", m.nim, m.nama);
    fclose(fp);

    printf("\nIsi file mahasiswa.txt:\n");
    fp = fopen("mahasiswa.txt", "r");
    if (!fp) {
        printf("File belum ada.\n");
        return 1;
    }
    char line[100];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}
