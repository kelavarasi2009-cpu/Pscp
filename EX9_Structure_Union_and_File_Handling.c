#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float mark;
};

union Contact
{
    char phone[15];
    char email[50];
};

int main(void)
{
    struct Student s;
    union Contact c;
    FILE *fp;
    char line[100];

    printf("Enter student roll number: ");
    scanf("%d", &s.rollno);

    printf("Enter student name (no spaces): ");
    scanf("%49s", s.name);

    printf("Enter student mark: ");
    scanf("%f", &s.mark);

    printf("Enter phone number: ");
    scanf("%14s", c.phone);

    fp = fopen("student.txt", "w");
    if (fp == NULL)
    {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    fprintf(fp, "Roll Number : %d\n", s.rollno);
    fprintf(fp, "Name : %s\n", s.name);
    fprintf(fp, "Mark : %.2f\n", s.mark);
    fprintf(fp, "Phone : %s\n", c.phone);
    fclose(fp);

    printf("\nStudent details written to file successfully.\n");

    fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open file for reading.\n");
        return 1;
    }

    printf("\n----- STUDENT DETAILS -----\n");
    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);
    return 0;
}
