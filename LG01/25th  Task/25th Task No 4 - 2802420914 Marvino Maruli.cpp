#include <stdio.h>
#include <string.h>

struct mhs {
    int nim;
    float gpa;
    char name[20];
};

void selectionSort(struct mhs arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].gpa < arr[min].gpa ||
               (arr[j].gpa == arr[min].gpa && strcmp(arr[j].name, arr[min].name) < 0)) {
                min = j;
            }
        }
        if (min != i) {
            struct mhs temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main() {
    struct mhs data[10] = {
        {101, 3.4, "Budi"},
        {102, 3.2, "Andi"},
        {103, 3.8, "Citra"},
        {104, 3.5, "Eka"},
        {105, 3.2, "Bayu"},
        {106, 3.5, "Dewi"},
        {107, 3.9, "Fajar"},
        {108, 3.7, "Gina"},
        {109, 3.8, "Hadi"},
        {110, 3.4, "Indra"}
    };

    int n = 10;

    printf("Sebelum sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d | %.2f | %s\n", data[i].nim, data[i].gpa, data[i].name);
    }

    selectionSort(data, n);

    printf("\nSetelah sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d | %.2f | %s\n", data[i].nim, data[i].gpa, data[i].name);
    }

    return 0;
}
