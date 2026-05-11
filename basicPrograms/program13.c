// WAP to print all the numbers from 1-10 except 6;

#include <stdio.h>

int main() {
    // using for loop:
    for (int i = 1; i<=10; i++) {
        if (i == 6) {
            continue;
        }
        printf("%d\n", i);
    }

    // using while loop;
    int i = 1;
    while (i <= 10) {
        if (i == 6) {
            i++;
            continue;
        }
        printf("%d \n", i);
        i++;
    }
}