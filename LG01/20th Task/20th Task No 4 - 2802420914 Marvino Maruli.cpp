#include <stdio.h>

struct ipkmhs {
    char nim[11];
    char name[30];
    float gpa;
};

int main() {
    struct ipkmhs mhs[5];

    for (int i = 0; i < 5; i++) {
        printf("Mahasiswa #%d\n", i+1);
        printf("NIM: "); 
        scanf("%s", mhs[i].nim);
        printf("Nama: ");
        scanf(" %[^\n]", mhs[i].name);
        printf("GPA: "); 
        scanf("%f", &mhs[i].gpa);
    }

    printf("\nMhs GPA >= 3.0:\n");
    for (int i = 0; i < 5; i++) {
        if (mhs[i].gpa >= 3.0){
            printf("%s\n", mhs[i].name);
        }
    }

    printf("\nMhs GPA < 3.0:\n");
    for (int i = 0; i < 5; i++) {
        if (mhs[i].gpa < 3.0){
            printf("%s\n", mhs[i].name);
        } 
    }

    return 0;
}
