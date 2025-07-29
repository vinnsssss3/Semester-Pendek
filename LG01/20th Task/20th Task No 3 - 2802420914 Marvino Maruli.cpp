#include <stdio.h>

struct automobile {
    int year;
    char model[8];
    int engine_power;
    float weight;
};

int main() {
    struct automobile car[5];
    for (int i = 0; i < 5; i++) {
        printf("Mobil #%d\n", i + 1);
        printf("Tahun: "); 
        scanf("%d", &car[i].year);
        printf("Model: "); 
        scanf("%s", car[i].model);
        printf("Tenaga Mesin: "); 
        scanf("%d", &car[i].engine_power);
        printf("Berat: "); 
        scanf("%f", &car[i].weight);
        printf("\n");
    }

    printf("\nData Mobil:\n");
    for (int i = 0; i < 5; i++) {
        printf("Mobil #%d: \n", i+1);
        printf("Tahun : %d\nModel : %s\nTenaga Mesin : %d\nBerat :  %.2f\n", car[i].year, car[i].model, car[i].engine_power, car[i].weight);
    }

    return 0;
}
