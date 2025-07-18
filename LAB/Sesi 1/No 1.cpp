#include <stdio.h>

int main() {
    char nama[50];
    int umur;

    scanf("%s", nama);
    scanf("%d", &umur);
    
    printf("Siapa Kamu? %s\n", nama);
    printf("Umur Kamu Berapa? %d\n", umur);

    return 0;
}
