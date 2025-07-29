#include <stdio.h>

struct studentScore {
    char nim[11];
    char name[30];
    char subjectCode[5];
    int sks;
    char grade;
};

int main() {
    struct studentScore mhs;

    printf("NIM: "); 
    scanf("%s", mhs.nim);
    printf("Nama: "); 
    scanf(" %[^\n]", mhs.name);
    printf("Kode Mata Kuliah: "); 
    scanf("%s", mhs.subjectCode);
    printf("SKS: "); 
    scanf("%d", &mhs.sks);
    printf("Nilai (A-E): "); 
    scanf(" %c", &mhs.grade);

    printf("\nHasil Akhir:\n");
    printf("NIM : %s\nNama : %s\nSubjectCode: %s\nSKS : %d\nGrade : %c\n", mhs.nim, mhs.name, mhs.subjectCode, mhs.sks, mhs.grade);
    return 0;
}
