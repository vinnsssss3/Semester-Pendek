#include <stdio.h>

int main() {
    
    int data[10], max = 0, min = 0, sum = 0;
    float average;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &data[i]);

        sum += data[i];

        if (i == 0) {
            max = min = data[i];
        } else {
            if (data[i] > max) max = data[i];
            if (data[i] < min) min = data[i];
        }
    }

    average = sum / 10.0;

    printf("\nMAX: %d\n", max);
    printf("MIN: %d\n", min);
    printf("Average: %.2f\n", average);

    return 0;
}
