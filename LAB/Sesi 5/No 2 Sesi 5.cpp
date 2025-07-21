#include <stdio.h>

int main() {
    int start, end, i = 0;

    printf("Nilai awal : ");
    scanf("%d", &start);
    printf("Nilai akhir : ");
    scanf("%d", &end);

    int num = start;
    for(i = 0; i < 3; i++){
        printf("\n");
        for(int j = 0; j < 3; j++){
            if(num <= end){
                printf("%d", num);
                num++; 
            }
        }
    }
    return 0;
}
