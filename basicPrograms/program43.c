// WAP to take input of marks of 3 subjects of 3 students via MultiDimensional Array;
/// (20/05/2026) {0xSakCodes}

#include <stdio.h>

// main function:
int main() {
    // integer type nested array;
    /// marksOfStudents[3][] -> [[],[],[]]
    //// marksOfStudents[3][3] -> [[_,_,_], [_,_,_], [_,_,_]];
    int marksOfStudents[3][3]; 

    // input loop:
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            // 0,0; 0,1; 0,2;
            int num;
            printf("enter marks of subject %d: ", j);
            scanf("%d", &num);

            marksOfStudents[i][j] = num;
        }
    }

    // printing loop:
    for (int k=0; k<3; k++) {
        for (int l=0; l<3; l++){
            printf(">> %d \t", marksOfStudents[k][l]);
        }
        printf("\n");
    }
    return 0;
}