#include <stdio.h>

struct Mhs {
    char name[20];
    int nim;
    float gpa;
};

int main() {
    FILE *fp;
    struct Mhs m;

    fp = fopen("Mhs.dat", "rb");

    if (fp == NULL) {
        printf("File gagal dibuka\n");
        return 1;
    }

    printf("NIM\tNama\t\tGPA\n");
    printf("----\t--------\t----\n");

    while (fread(&m, sizeof(m), 1, fp)) {
        printf("%d\t%s\t\t%.2f\n", m.nim, m.name, m.gpa);
    }

    fclose(fp);
    return 0;
}
