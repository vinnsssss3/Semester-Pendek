#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4};
    int *ptr = arr;
    int hasil = 1;

    for (int i = 0; i < 3; i++) {
        hasil *= *(ptr + i);
    }

    printf("%d\n", hasil);
    return 0;
}
