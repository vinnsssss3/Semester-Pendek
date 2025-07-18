#include <stdio.h>

int main() {
    int tinggi = 5; //input tinggi segitiga

    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
