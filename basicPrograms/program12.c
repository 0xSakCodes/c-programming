// WAP to take input from users until they enter a number which is multiple of 7;

#include <stdio.h>

int main() {
    int notMultipleOf7;
    // using do and while:
    do {
        printf("enter a number: ");
        scanf("%d", &notMultipleOf7);

    } while (notMultipleOf7 % 7 != 0);

    // using for loop:
    for (int i=1; ;) {
        printf("enter a number: ");
        scanf("%d", &notMultipleOf7);

        if (notMultipleOf7 % 7 == 0){
            break;
        }
    }

    // assiging it 0 value: (so it doesnt gets affected by previous entries);
    notMultipleOf7 = 0;

    // using while loop:
    while (notMultipleOf7 % 7 != 0){
        printf("enter a number: ");
        scanf("%d", &notMultipleOf7);
    }
}