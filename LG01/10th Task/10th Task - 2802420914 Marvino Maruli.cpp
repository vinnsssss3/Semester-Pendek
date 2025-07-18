#include <stdio.h>

int main() {
    int pilihan;

    printf("Pemilihan Jurusan Streaming Computer Science\n");
    printf("1. Intelligence System\n");
    printf("2. Database Technology\n");
    printf("3. Software Engineering\n");
    printf("4. Interactive Multimedia\n");
    printf("5. ⁠⁠Network Technology\n");

    printf("Masukkan Pilihan Anda (1-5): ");
    scanf("%d", &pilihan);
    printf("\n");

    switch (pilihan) {
        case 1:
            printf("Selamat, Jurusan yang Anda Pilih adalah Intelligence System\n");
            break;
        case 2:
            printf("Selamat, Jurusan yang Anda Pilih adalah Database Technology\n");
            break;
        case 3:
            printf("Selamat, Jurusan yang Anda Pilih adalah Software Engineering\n");
            break;
        case 4:
            printf("Selamat, Jurusan yang Anda Pilih adalah Interactive Multimedia\n");
            break;
        case 5:
            printf("Selamat, Jurusan yang Anda Pilih adalah ⁠Network Technology\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan Masukkan Angka 1-5.\n");
    }

    return 0;
}
