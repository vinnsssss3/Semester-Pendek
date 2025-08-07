#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;
    src = fopen("test.c", "r");
    dest = fopen("try.c", "w");

    if (src == NULL || dest == NULL) {
        printf("File gagal dibuka/dibuat\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    return 0;
}
