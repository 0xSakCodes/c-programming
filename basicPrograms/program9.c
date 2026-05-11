// WAP to print the sum of first (n) natural numbers
/// then print those numbers in reverse;

#include <stdio.h>

int main() {
    int n;
    int SumOf = 0;

    printf("enter total numbers: ");
    scanf("%d", &n);

    // i = 1; (increases everytime / i++); (till its smaller than or equal to n);
    // j = n; (user-input); (decreases everytime / j--); (till its greator than or equal to 1);
    for (int i=1, j=n; i<=n, j>=1; i++,j--) {
        SumOf = SumOf + i; // SumOf += i;
        printf(">> %d \n",j);
    }
    printf("total sum of %d numbers: %d\n",n,SumOf);

    /*
    do {
        printf("\n%d",n);
        n--;
    } while (n>=1);
    */
}