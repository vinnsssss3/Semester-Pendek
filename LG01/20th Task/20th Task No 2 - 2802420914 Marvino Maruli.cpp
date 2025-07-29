#include <stdio.h>

struct Address {
    char street[30];
    int number;
    char city[20];
    char province[20];
};

struct Date {
    int date, month, year;
};

struct Student {
    char nim[11];
    char name[30];
    struct Address addr;
    struct Date birth;
};

int main() {
    struct Student mhs[5];
    for (int i = 0; i < 5; i++) {
        printf("Data Mahasiswa ke-%d:\n", i + 1);
        printf("NIM: "); 
        scanf("%s", mhs[i].nim);
        printf("Nama: "); 
        scanf(" %[^\n]", mhs[i].name);
        printf("Jalan: "); 
        scanf(" %[^\n]", mhs[i].addr.street);
        printf("No: "); 
        scanf("%d", &mhs[i].addr.number);
        printf("Kota: "); 
        scanf(" %[^\n]", mhs[i].addr.city);
        printf("Provinsi: "); 
        scanf(" %[^\n]", mhs[i].addr.province);
        printf("Tanggal lahir (dd mm yyyy): "); 
        scanf("%d %d %d", &mhs[i].birth.date, &mhs[i].birth.month, &mhs[i].birth.year);
        printf("\n");
    }
    return 0;
}
