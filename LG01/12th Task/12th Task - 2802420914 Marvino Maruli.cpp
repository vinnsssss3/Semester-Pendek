#include <stdio.h>
#include <string.h>

int main() {
    char tindakan[100];
    char status[10];

    printf("Program agar Lulus Mata Kuliah\n");

    for (int count = 1; ; count++) {
        printf("Langkah #%d yang akan dilakukan: ", count);
        scanf(" %[^\n]", tindakan);

        printf("Apakah kamu sudah lulus? (ya/tidak): ");
        scanf("%s", status);

        if (strcmp(status, "ya") == 0) {
            break;  
        }
    }

    printf("\nSelamat! Kamu lulus mata kuliah ini!\n");
    return 0;
}
