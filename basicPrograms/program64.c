// WAP to calculate and store values in form of vector addition;
/// (02/06/2026) {0xSakCodes}

#include <stdio.h>

typedef struct addition {
    /*
    | x -> i cap;
    | y -> j cap;
    || a1 & a2 + b1 & b2;
    */
    int a1, a2;
    int b1, b2;
    int x, y;
} add;

// user defined function declaration:
void addition(add vector);

// main function:
int main() {
   add vector;
   // first eqn;
   printf("--- first eqn ---\n");
   printf("enter value of i(cap): ");
   scanf("%d", &vector.a1);
   printf("enter value of j(cap): ");
   scanf("%d", &vector.a2);
   // second eqn;
   printf("\n\n--- second eqn ---\n");
   printf("enter value of i(cap): ");
   scanf("%d", &vector.b1);
   printf("enter value of j(cap): ");
   scanf("%d", &vector.b2);

   printf("\n\n--- vector addition ---\n");
   addition(vector);
    return 0;
}

// defining function: 
void addition(add vector) {
    vector.x = vector.a1 + vector.b1;
    vector.y = vector.a2 + vector.a2;

    printf("%d i(cap)\t%d j(cap)", vector.x, vector.y);
}