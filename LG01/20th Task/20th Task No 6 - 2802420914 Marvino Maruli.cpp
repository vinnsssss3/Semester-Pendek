#include <stdio.h>

struct studentScore {
    char subjectCode[5];
    int sks;
    char grade;
};

int convertGrade(char grade) {
    switch (grade) {
        case 'A': return 4;
        case 'B': return 3;
        case 'C': return 2;
        case 'D': return 1;
        case 'E': return 0;
        default: return 0;
    }
}

int main() {
    struct studentScore matkul[5];
    int totalSks = 0;
    float totalNilai = 0;

    for (int i = 0; i < 5; i++) {
        printf("Mata Kuliah #%d:\n", i+1);
        printf("Kode MK: "); 
        scanf("%s", matkul[i].subjectCode);
        printf("SKS: "); 
        scanf("%d", &matkul[i].sks);
        printf("Grade: "); 
        scanf(" %c", &matkul[i].grade);

        totalSks += matkul[i].sks;
        totalNilai += matkul[i].sks * convertGrade(matkul[i].grade);
    }

    float ip = totalNilai / totalSks;
    printf("\nIP Semester = %.2f\n", ip);

    return 0;
}
