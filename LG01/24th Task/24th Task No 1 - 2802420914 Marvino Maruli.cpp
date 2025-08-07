#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int day, month, year, age;
    int above51 = 0, range44_51 = 0, range36_43 = 0, range28_35 = 0, below28 = 0;
    fp = fopen("birth.txt", "r");

    if (fp == NULL) {
        printf("File Tidak Bisa Dibuka\n");
        return 1;
    }

    while (fscanf(fp, "%d/%d/%d", &day, &month, &year) != EOF) {
        if (year < 100) year += 1900; 
        age = 2019 - year;

        if (age > 51) above51++;
        else if (age >= 44) range44_51++;
        else if (age >= 36) range36_43++;
        else if (age >= 28) range28_35++;
        else below28++;
    }

    fclose(fp);

    printf("Above 51: %d\n", above51);
    printf("44 - 51: %d\n", range44_51);
    printf("36 - 43: %d\n", range36_43);
    printf("28 - 35: %d\n", range28_35);
    printf("Below 28: %d\n", below28);

    return 0;
}
