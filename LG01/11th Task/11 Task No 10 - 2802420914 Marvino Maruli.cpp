#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        int hari = (i - 1) % 7 + 1; 
        printf("%d ", hari);
    }

    return 0;
}
