/*Name: Shreya Yadav
      Class: F.E. (Computer2)
      Batch: D
      Roll no.: 2
      UIN: 251P075
    */
#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float total;
};

void inputData(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Total Marks: ");
        scanf("%f", &s[i].total);
    }
}

void displayData(struct Student s[], int n) {
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Total Marks: %.2f\n", s[i].total);
    }
}

int findTopper(struct Student s[], int n) {
    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].total > s[topperIndex].total) {
            topperIndex = i;
        }
    }
    return topperIndex;
}

int main() {
    struct Student s[5];

    // Input 5 students
    inputData(s, 5);

    // Display all records
    displayData(s, 5);

    // Find topper
    int top = findTopper(s, 5);

    // Display topper info
    printf("\n--- Topper Details ---\n");
    printf("Name: %s\n", s[top].name);
    printf("Roll No: %d\n", s[top].roll);
    printf("Total Marks: %.2f\n", s[top].total);

    return 0;
}





