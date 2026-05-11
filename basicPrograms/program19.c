// WAP to print prime numbers in a range.

#include <stdio.h>

int main() {
    int rangeStart;
    int rangeEnd;

    printf("enter starting number: ");
    scanf("%d", &rangeStart);
    printf("enter ending number: ");
    scanf("%d", &rangeEnd);

    if (rangeStart > 1){
        for (int i=2; i<rangeEnd; i++){
            // 23456789
            for (int j=2; j<i; j++){
                if (i % j == 0) {
                    printf("%d\n", j);
                }
            }
        }
    }
}