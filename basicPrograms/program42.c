// Multi-Dimensional array;
/// (20/05/2026) {0xSakCodes}

#include <stdio.h>

// main function:
int main() {
    // nested array;
    // arr[2] -> [_,_];
    /// therefore, arr[2][2] (says only 2 spaces even inside those arrays) -> [[_,_], [_,_]];
    int arr[2][2] = {{1,2}, {3,4}};
    
    /* 
    : arr[0,0] -> 1; (array on 0th index, value at 0th index);
    : arr[0,1] -> 2; (array on 0th index, value at 1st index);
    : arr[1,0] -> 3; (array on 1st index, value at 0th index);
    : arr[1,1] -> 4; (array on 1st index, value at 1st index);
    */

    printf("%d \n",arr[1][1]);
    printf("%d \n", arr[0][1]);
    // last print should throw err values;
    printf("%d \n", arr[2][2]);
}