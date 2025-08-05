#include <stdio.h>

int main() {
    FILE *file;
    char nim[20], nama[50];
    int nilai;

    // Input data
    printf("NIM: ");
    scanf("%s", nim);
    printf("\n");
    printf("Nama: ");
    scanf(" %[^\n]", nama); 
    printf("\n");
    printf("Nilai: ");
    scanf("%d", &nilai);

    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }
    fprintf(file, "%s,%s,%d\n", nim, nama, nilai);
    fclose(file);

    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Gagal membaca file!\n");
        return 1;
    }

    printf("\nData Mahasiswa:\n");
    fscanf(file, "%[^,],%[^,],%d", nim, nama, &nilai);
    printf("\nNIM: %s, Nama: %s, Nilai: %d\n", nim, nama, nilai);
    fclose(file);

    return 0;
}
