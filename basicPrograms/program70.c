// WAP to input student information from a user & enter it to a file;
/// (03/06/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void enterStudent();
void appendOnFile(char name[], int age, int roll, int class);

int main() {
    enterStudent();

    return 0;
}

void enterStudent() {
    char name[20];
    int age;
    int rollN;
    int class;

    printf("enter student name: ");
    scanf("%s", &name);
    printf("enter student age: ");
    scanf("%d", &age);
    printf("enter student rollNumber: ");
    scanf("%d", &rollN);
    printf("enter student class: ");
    scanf("%d", &class);

    appendOnFile(name, age, rollN, class);
}

void appendOnFile(char name[], int age, int rollNumber, int class) {
    FILE *opened;

    opened = fopen("./programFiles/program70.txt", "a");

    if (opened != NULL) {
        /*
        | we can use multiple functions to write down the collected information;
        || fprintf(fileLoc, dataType, &variable) & fputs(); according to our needs;
        */
        fputs(name, opened);
        fputs("\n", opened);
        fprintf(opened, "%d", age);
        fputs("\n", opened);
        fprintf(opened, "%d", rollNumber);
        fputs("\n", opened);
        fprintf(opened, "%d", class);
        fputs("\n", opened);
    } else {
        printf("FILE: not found;");
    }
}