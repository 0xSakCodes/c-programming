#include <stdio.h>

int main(){
    // implicit conversion of data types;
    /*
    () * () -> output
    int * int -> int;
    int * float -> float;
    float * float -> float;
    */

    // explicit conversion of data types:
    int a = (int) -1.999; // removes everything after decimals (without rounding off);
    printf("%d",a);
};