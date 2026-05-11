// WAP to print prime numbers in a range.

#include <stdio.h>

int main()
{
    // defines variables:
    int rangeStart;
    int rangeEnd;
    int isPrime;

    // user-input: 
    printf("enter starting number: ");
    scanf("%d", &rangeStart);
    printf("enter ending number: ");
    scanf("%d", &rangeEnd);

    // starts loop from 2 (because 1 can divide any number);
    for (int i = 2; i <= rangeEnd; i++)
    {
        isPrime = 1;
        // expected output- 2,3,4,5,6,7,8,9,10 (1-10);
        // runs loop till j is smaller than output  ; ( because the number would always be divisible by same number); 
        for (int j = 2; j < i; j++)
        {
            // if i gets divied by any other number in between of iterations
            /// it is supposedly not prime number;
            if (i % j == 0)
            {
                // updates isPrime to be zero (false);
                isPrime = 0;
                // terminates that loop;
                break;
            }
        }

        // conditional checking, if the loop survives, 
        if (isPrime)
        {
            // prints the number as prime:
            printf("%d ", i);
        }
    }
}