#include <stdio.h>

int main() {
    float ipk;

    printf("Nilai IPK : ");
    scanf("%f", &ipk);

    if (ipk >= 3.5 && ipk <= 4.0) {
        printf("Grade Cumlaude\n");
    } else if (ipk >= 3.0 && ipk <= 3.4) {
        printf("Grade: Outstanding\n");
    } else if (ipk >= 2.5 && ipk <= 2.9) {
        printf("Grade: Very Good\n");
    } else if (ipk >= 2.0 && ipk <= 2.4) {
        printf("Grade: Good\n");
    } else if (ipk < 2.0) {
        printf("Grade: Poor\n");
    } else {
        printf("Invalid IPK entered.\n");
    }

    return 0;
}
