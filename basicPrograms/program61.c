// WAP to store the data of 3 students; name, class, rollnumber; (userinput)
/// (30/05/2026) {0xSakCodes}


#include <stdio.h>
#include <string.h>

// user defined data type declaration;
struct students {
    /* data */
    char name[20];
    int rollNumber;
    int class;
};

// main function:
int main() {
    // taking user input;
    // total number of students;
    /// its similar to nested data inside student;
    struct students student[3];
    char name[20];
    for (int i=0; i<3; i++) {
        printf("enter name of student %d: ", (i+1));
        scanf("%s", &student[i].name);
        printf("enter roll number of student %d: ", (i+1));
        scanf("%d", &student[i].rollNumber);
        printf("enter class of student %d: ", (i+1));
        scanf("%d", &student[i].class);
    }

    for (int j=0; j<3; j++){
        // normal:
        printf("\n\nNORMAL:\n");
        printf("student %d name: %s\n", (j+1), student[j].name);
        printf("student %d class: %d\n", (j+1), student[j].class);
        printf("student %d roll: %d\n", (j+1), student[j].rollNumber);
        printf("---\t---");
        

        // pointer;
        struct students *ptr;
        // PTR -> ADDRESS OF STUDENT[J];
        ptr = &student[j];
        printf("\n\nPOINTERS: \n");
        printf("student %d name: %s\n", (j+1), (*ptr).name);
        printf("student %d class: %d\n", (j+1), (*ptr).class);
        printf("student %d roll: %d\n", (j+1), (*ptr).rollNumber);
        printf("---\t---");

        // arrow;
        printf("\n\nARROWS: \n");
        printf("student %d name: %s\n", (j+1), ptr->name);
        printf("student %d class: %d\n", (j+1), ptr->class);
        printf("student %d roll: %d\n", (j+1), ptr->rollNumber);
        printf("---\t---");
    }
    return 0;
}