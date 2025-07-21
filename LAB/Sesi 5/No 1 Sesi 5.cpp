#include <stdio.h>

int main() {
    char str[100];
    char *p;
    int len = 0;

    printf("Input: ");
    scanf("%s", str); 

    p = str;
    while (*p != '\0') { 
        len++;
        p++;
    }

    printf("Panjang string: %d\n", len);
    return 0;
}
