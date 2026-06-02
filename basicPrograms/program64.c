// WAP to calculate and store values in form of vector addition;
/// (02/06/2026) {0xSakCodes}

#include <stdio.h>

typedef struct addition {
    /*
    | x -> i cap;
    | y -> j cap;
    || a1 & a2 + b1 & b2;
    
    int a1, a2;
    int b1, b2;
    */
    int x, y;
} add;

// user defined function declaration:
void addition(add vector1, add vector2, add sumOfVector);

// main function:
int main() {
   add vector1;
   add vector2;
   add sumOfVector;

   // first eqn;
   printf("--- first eqn ---\n");
   printf("enter value of i(cap): ");
   scanf("%d", &vector1.x);
   printf("enter value of j(cap): ");
   scanf("%d", &vector1.y);

   // second eqn;
   printf("\n\n--- second eqn ---\n");
   printf("enter value of i(cap): ");
   scanf("%d", &vector2.x);
   printf("enter value of j(cap): ");
   scanf("%d", &vector2.y);

   printf("\n\n--- vector addition ---\n");
   addition(vector1, vector2, sumOfVector);
    return 0;
}

// defining function: 
void addition(add vector1, add vector2, add sumOfVector) {
    sumOfVector.x = vector1.x + vector2.x;
    sumOfVector.y = vector1.y + vector2.y;

    printf("%d i(cap)\t%d j(cap)", sumOfVector.x, sumOfVector.y);
}