#include <stdio.h>

int main() {
    float tugas, mid, final;
    float nilaiakhir;

    printf("Assignment Score: ");
    scanf("%f", &tugas);

    printf("Mid Exam Score: ");
    scanf("%f", &mid);

    printf("Final Exam Score: ");
    scanf("%f", &final);

    nilaiakhir = 0.2 * tugas + 0.3 * mid + 0.5 * final;

    printf("Final Score = %.2f\n", nilaiakhir);

    return 0;
}
