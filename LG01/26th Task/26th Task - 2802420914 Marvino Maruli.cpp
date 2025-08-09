#include <stdio.h>
#include <string.h>


//scenario sekolah ingin melihat murid manakah yang mendapatkan peringkat pertama dan terakhir.
//namun data murid terlalu banyak, sehingga dibuatlah program menggunakan bubble sort untuk
//menyortir murid-murid perkelas secara otomatis. 

struct Siswa {
    char nama[50];
    int nilai;
};

void bubbleSort(struct Siswa arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].nilai < arr[j + 1].nilai) {
                struct Siswa temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Masukkan jumlah siswa: ");
    scanf("%d", &n);

    struct Siswa siswa[n];

    for (int i = 0; i < n; i++) {
        printf("\nSiswa #%d\n", i + 1);
        printf("Nama  : ");
        scanf(" %[^\n]", siswa[i].nama); 

        printf("Nilai : ");
        scanf("%d", &siswa[i].nilai);
    }

    bubbleSort(siswa, n);

    printf("\nRangking Murid (Tertinggi ke Terendah):\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %d\n", siswa[i].nama, siswa[i].nilai);
    }

    return 0;
}
