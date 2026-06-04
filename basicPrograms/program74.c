// WAP to format the information of 5 students (name, marks, cgpa, course) in a table like structure in a file;
/// (04/06/2026) {0xSakCodes}

#include <stdio.h>

// defining data structure;
typedef struct studentInfo {
    char name[30];
    int marks;
    float cgpa;
    char course[30];
} stu;

int main() {
    stu student[5];
    FILE *fptr;
    fptr = fopen("./programFiles/program74.txt", "a");

    // checks if file exists:
    if (fptr == NULL) {
        printf("ERROR: file not found;");
        return 1;
    }

    // taking user inputs;
    for (int i=0; i<5; i++){
        /*
        | issue with scanf():
        || we are unable to write full names (as space terminates the sequence);
        || supposedly, the better way to conclude this might be gets() & puts();
        */
        printf("enter student name: ");
        scanf("%s", &student[i].name);
        printf("enter student marks: ");
        scanf("%d", &student[i].marks);
        printf("enter student cgpa: ");
        scanf("%f", &student[i].cgpa);
        printf("enter student course: ");
        scanf("%s", &student[i].course);
    }

    // writing student records into file;
    for (int j=0; j<5; j++) {
        /*
        | understanding fptrinf():
        || fprintf(filePointer, formatting, variable);
        || filePointer -> opened file;
        || formatting -> data type & formatting to be written in the file;
        || variable -> data to be written;

        ||| we can also use fputs (for strings) & fputc (for characters);
        */
        fprintf(fptr, "%s\t|", student[j].name);
        fprintf(fptr, "%d\t|", student[j].marks);
        fprintf(fptr, "%f\t|", student[j].cgpa);
        fprintf(fptr, "%s\t|\n", student[j].course);

    }

    printf("codes executed succesfully :)");
    return 0;
}