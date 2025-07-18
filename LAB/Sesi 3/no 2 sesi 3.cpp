#include <stdio.h>

int main() {
    int usia;

    scanf("%d", &usia);

    if (usia < 20) {
        if (usia < 13) {
            printf("Anak Anak\n");
        } else {
            printf("Remaja\n");
        }
    } else {
        printf("Dewasa\n");
    }

    return 0;
}
