#include <stdio.h>

int main() {
    int j = 11, k = 11;
    //fungsi for
    for(int i = 11; i <= 188; i += 2){
        printf("%d ", i);
    }
    printf("\n");
    //fungsi while
    while(j <= 188) {
        printf("%d ", j);
        j += 2;
    }
    printf("\n");
    //fungsi do while
    do {
        printf("%d ", k);
        k += 2;
    } while(k <= 188);
    return 0;
}
