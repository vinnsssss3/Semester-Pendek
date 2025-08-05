#include <stdio.h>

int main() {
    int arr[5];
    int cari, index = -1;
    printf("Masukkan array (5 angka): ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    printf("nilai yang dicari: ");
    scanf("%d", &cari);

    for (int i = 0; i < 5; i++) {
        if (arr[i] == cari) {
            index = i;
            break;
        }
    }

    if (index != -1)
        printf("%d\n", index);
    else
        printf("Nilai tidak ditemukan\n");

    return 0;
}
