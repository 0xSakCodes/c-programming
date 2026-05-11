// WAP to calculate the sum of all numbers between 5 and 50; (including 5&50);

#include <stdio.h>

int main() {
    int calculatedSum = 0;
    for (int i = 5; i<=50; i++) {
        calculatedSum += i;
    }
    printf("sum of numbers: %d", calculatedSum);
}