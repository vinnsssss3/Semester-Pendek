#include <stdio.h>

struct Mhs {
    char name[20];
    int nim;
    float gpa;
};

int main() {
    FILE *fp;
    struct Mhs m;
    fp = fopen("Mhs.dat", "ab"); //perubahan menjadi append ke binary dari nomor 2

    if (fp == NULL) {
        printf("File gagal dibuat\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Masukkan Nama, NIM, GPA: ");
        scanf("%s %d %f", m.name, &m.nim, &m.gpa);
        fwrite(&m, sizeof(m), 1, fp);
    }

    fclose(fp);
    return 0;
}
