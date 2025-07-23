#include <stdio.h>

int main() {
    char karakter;

    printf("Masukkan Sebuah Karakter (1 karakter saja) : ");
    scanf(" %c", &karakter); 

    if (karakter >= 'a' && karakter <= 'z') {
        printf("%c adalah alphabet huruf kecil.\n", karakter);
    } else if (karakter >= 'A' && karakter <= 'Z') {
        printf("%c adalah alphabet huruf kapital.\n", karakter);
    } else if (karakter >= '0' && karakter <= '9') {
        printf("%c adalah sebuah angka.\n", karakter);
    } else {
        printf("%c adalah simbol atau karakter khusus.\n", karakter);
    }

    return 0;
}
