#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 }; 
    int *numPtr = numArr;

    printf("%d\n", *numPtr);
    printf("%d\n", *numArr);
    printf("%d\n", numPtr[5]);
    printf("%lu\n", sizeof(numArr));
    printf("%lu\n", sizeof(numPtr));

    return 0;
}
