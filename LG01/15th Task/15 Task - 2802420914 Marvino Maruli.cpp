#include <stdio.h>

int main() {
    int tinggi;
    
    printf("Tinggi Segitiga : ");
    scanf("%d", &tinggi);

    for (int i = 1; i <= tinggi; i++) {
        for (int spasi = 1; spasi <= tinggi - i; spasi++) {
            printf("  ");
        }
        for (int bintang = 1; bintang <= (2 * i - 1); bintang++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
