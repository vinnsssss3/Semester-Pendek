#include <stdio.h>

//kasus yang digunakan adalah pengecekan nilai kelulusan mahasiswa.
//penggunaan kodenya adalah dengan input nama dan nilai
//lalu akan ada pengecekan dari nilai menggunakan if untuk cek apakah lulus atau tidak.
//setelah semua proses, maka program akan mencetak kesimpulan berdasarkan input.

int main() {
    char nama[50];
    float nilai;

    printf("Program Cek Kelulusan\n");
    printf("nama siswa: ");
    scanf("%[^\n]", nama);

    printf("Masukkan nilai ujian akhir: ");
    scanf("%f", &nilai);

    printf("\nHasil Evaluasi\n");
    printf("Nama Siswa : %s\n", nama);
    printf("Nilai Ujian: %.2f\n", nilai);

    if (nilai >= 60) {
        printf("Status     : LULUS\n");
    } else {
        printf("Status     : TIDAK LULUS\n");
    }

    return 0;
}
