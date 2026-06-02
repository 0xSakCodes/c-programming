// Understanding typedef keyword;
/// (02/06/2026) {0xSakCodes}

/*
--- TYPE DEF ---
it is used to create an alais (alternative name) for user defined data structure;
----- ENDS -----
*/

#include <stdio.h>
#include <string.h>

// declaraing typedef - user defined structure;
typedef struct studentInfo {
    /* data */
    char name[20];
    int rollNumber;
} si; // we can use si instead of writing ` struct studentInfo; `

// user defined function declaration:
void takeInput(si s[]);
void printNames(si s[]);


int main() {
    /*
    | configuring data structure; 
    || si -> data type; students -> variable;
    ||| students {[0], [1]};
    |||| students {{name, rollNumber}, {name, rollNumber}};
    */
    si students[2];
    // calling the function;
    takeInput(students);

    // printf("> %s\n>> %s", students[0].name, students[1].name);
    // calling the function;
    printNames(students);
    return 0;
}

/*
---> LOGIC <---
| si is the data type used as parameter;
| s is variable;
|| s[] demonstrates array being entered therefore no pointer was required and
|| the changes were directly made into the original variable rather than copy;
--- > END < ---
*/
void takeInput(si s[]) {
    for (int i = 0; i<2; i++) {
        char studentName[20];
        printf("enter student name: ");
        scanf("%s", &studentName);
        // copying the string;
        strcpy(s[i].name, studentName);
        
        printf("enter student roll: ");
        scanf("%d", &s[i].rollNumber);
    }
}

void printNames(si s[]) {
    for (int i=0; i<2; i++) {
        printf("name>> %s\n", s[i].name);
    }
}