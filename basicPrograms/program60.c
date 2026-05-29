// WAP to store the data of 3 students; name, class, rollnumber;
/// (29/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// main function:
int main() {
    // user defined data type;
    struct students
    {
        /* data */
        char name[15];
        int class;
        int rollNumber;
    };

    // creating data;
    struct students student1;
    struct students student2;
    struct students student3;

    // assuming data for structure;
    student1.class = 5;
    strcpy(student1.name, "hello world");
    student1.rollNumber = 3;

    student2.class = 3;
    strcpy(student2.name, "alakazam");
    student2.rollNumber = 1;

    student3.class = 12;
    strcpy(student3.name, "sakcodes");
    student3.rollNumber = 2;


    printf("enter which student info u wanna access: ");
    int getInfoOf;
    scanf("%d", &getInfoOf);

    if (getInfoOf == 1) {
        printf(">> %s\n",student1.name);
        printf(">> %d\n",student1.class);
        printf(">> %d\n",student1.rollNumber);
    } else if (getInfoOf == 2) {
        printf(">> %s\n",student2.name);
        printf(">> %d\n",student2.class);
        printf(">> %d\n",student2.rollNumber);
    } else if (getInfoOf == 3) {
        printf(">> %s\n",student3.name);
        printf(">> %d\n",student3.class);
        printf(">> %d\n",student3.rollNumber);
    }

    return 0;
}