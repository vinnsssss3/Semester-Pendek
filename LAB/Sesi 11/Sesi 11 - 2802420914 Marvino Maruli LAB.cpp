#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_FILE "data.txt"
#define TEMP_FILE "temp.txt"

typedef struct {
    char nim[32];
    char name[128];
    char birthdate[32];
    int semester;
} Student;

void insertStudent() {
    Student s;
    FILE *fp = fopen(DATA_FILE, "a");
    if (!fp) {
        perror("Gagal membuka file untuk menulis");
        return;
    }

    printf("Input NIM: ");
    scanf(" %31[^\n]", s.nim);

    printf("Input Name: ");
    scanf(" %127[^\n]", s.name);

    printf("Input Birthdate (contoh: 2000-01-31): ");
    scanf(" %31[^\n]", s.birthdate);

    printf("Input Semester (angka): ");
    if (scanf("%d", &s.semester) != 1) {
        printf("Input semester tidak valid.\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        fclose(fp);
        return;
    }
    int c; while ((c = getchar()) != '\n' && c != EOF);
    fprintf(fp, "%s|%s|%s|%d\n", s.nim, s.name, s.birthdate, s.semester);
    fclose(fp);

    printf("Mahasiswa berhasil ditambahkan.\n");
}

void viewStudents() {
    FILE *fp = fopen(DATA_FILE, "r");
    if (!fp) {
        printf("Belum ada data. File '%s' tidak ditemukan.\n", DATA_FILE);
        return;
    }

    char line[1024];
    int idx = 0;
    printf("\n----- Data Mahasiswa -----\n");
    while (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\n")] = 0;

        char *nim = strtok(line, "|");
        char *name = strtok(NULL, "|");
        char *birthdate = strtok(NULL, "|");
        char *semester_str = strtok(NULL, "|");

        if (!nim || !name || !birthdate || !semester_str) continue;

        int semester = atoi(semester_str);
        printf("No: %d\n", ++idx);
        printf("  NIM      : %s\n", nim);
        printf("  Name     : %s\n", name);
        printf("  Birthdate: %s\n", birthdate);
        printf("  Semester : %d\n\n", semester);
    }
    if (idx == 0) {
        printf("Tidak ada data mahasiswa.\n");
    }
    fclose(fp);
}

void deleteStudent() {
    char target_nim[32];
    printf("Input NIM yang ingin dihapus: ");
    scanf(" %31[^\n]", target_nim);

    FILE *fp = fopen(DATA_FILE, "r");
    if (!fp) {
        printf("File data tidak ditemukan. Tidak ada yang dihapus.\n");
        return;
    }

    FILE *tmp = fopen(TEMP_FILE, "w");
    if (!tmp) {
        perror("Gagal membuat file sementara");
        fclose(fp);
        return;
    }

    char line[1024];
    int found = 0;
    while (fgets(line, sizeof(line), fp)) {
        char copy[1024];
        strncpy(copy, line, sizeof(copy));
        copy[sizeof(copy)-1] = '\0';
        copy[strcspn(copy, "\n")] = 0;

        char *nim = strtok(copy, "|");
        if (nim && strcmp(nim, target_nim) == 0) {
            found = 1;
            continue;
        }
        fputs(line, tmp);
    }

    fclose(fp);
    fclose(tmp);

    if (!found) {
        remove(TEMP_FILE);
        printf("NIM '%s' tidak ditemukan. Tidak ada yang dihapus.\n", target_nim);
        return;
    }

  
    if (remove(DATA_FILE) != 0) {
        perror("Gagal menghapus file lama");
        return;
    }
    if (rename(TEMP_FILE, DATA_FILE) != 0) {
        perror("Gagal mengganti file data");
        return;
    }

    printf("Data dengan NIM '%s' berhasil dihapus.\n", target_nim);
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert Mahasiswa Baru\n");
        printf("2. Lihat Data Mahasiswa\n");
        printf("3. Delete Data Mahasiswa (by NIM)\n");
        printf("4. Exit\n");
        printf("Choose [1-4]: ");
        if (scanf("%d", &choice) != 1) {
            printf("Pilihan tidak valid.\n");
            int c; while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }
        int c; while ((c = getchar()) != '\n' && c != EOF);

        switch (choice) {
            case 1: 
                insertStudent(); 
                break;
            case 2: 
                viewStudents(); 
                break;
            case 3: 
                deleteStudent(); 
                break;
            case 4: 
                printf("Keluar.\n"); 
                exit(0);
            default: 
                printf("Pilihan harus antara 1-4.\n");
        }
    }
    return 0;
}
