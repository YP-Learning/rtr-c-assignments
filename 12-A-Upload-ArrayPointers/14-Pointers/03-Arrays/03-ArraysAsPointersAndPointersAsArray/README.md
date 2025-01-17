# ArraysAsPointersAndPointersAsArray

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots

## Code
### [ArraysAsPointersAndPointersAsArray.c](./01-Code/ArraysAsPointersAndPointersAsArray.c)
```c
#include <stdio.h>

int main(void)
{
    int ypp_iArray[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int *ptr_ypp_iArray = NULL;

    printf("\n\n");
    printf("### Using Array Name as a Pointer i.e. Value of xth element of iArray : *(iArray + x) And address of the xth element o iarray : (iArray + x) ###\n\n");
    printf("Integer Array elements and their addressses :\n\n");
    printf("*(iArray + 0) = %d \t\t At Address (iArray + 0) : %p\n", *(ypp_iArray + 0), (ypp_iArray + 0));
    printf("*(iArray + 1) = %d \t\t At Address (iArray + 1) : %p\n", *(ypp_iArray + 1), (ypp_iArray + 1));
    printf("*(iArray + 2) = %d \t\t At Address (iArray + 2) : %p\n", *(ypp_iArray + 2), (ypp_iArray + 2));
    printf("*(iArray + 3) = %d \t\t At Address (iArray + 3) : %p\n", *(ypp_iArray + 3), (ypp_iArray + 3));
    printf("*(iArray + 4) = %d \t\t At Address (iArray + 4) : %p\n", *(ypp_iArray + 4), (ypp_iArray + 4));
    printf("*(iArray + 5) = %d \t\t At Address (iArray + 5) : %p\n", *(ypp_iArray + 5), (ypp_iArray + 5));
    printf("*(iArray + 6) = %d \t\t At Address (iArray + 6) : %p\n", *(ypp_iArray + 6), (ypp_iArray + 6));
    printf("*(iArray + 7) = %d \t\t At Address (iArray + 7) : %p\n", *(ypp_iArray + 7), (ypp_iArray + 7));
    printf("*(iArray + 8) = %d \t\t At Address (iArray + 8) : %p\n", *(ypp_iArray + 8), (ypp_iArray + 8));
    printf("*(iArray + 9) = %d \t\t At Address (iArray + 9) : %p\n", *(ypp_iArray + 9), (ypp_iArray + 9));

    ptr_ypp_iArray = ypp_iArray;

    printf("\n\n");
    printf("### Using Pointer as Array Name i.e. Value of xth element of iArray : ptr_iArray[x] And address of the xth element of iArray : &ptr_iArray[x] ###\n\n");
    printf("Integer Array elements and their addresses :\n\n");
    printf("ptr_iArray[0] = %d \t\t At Address &ptr_iArray[0] : %p\n", ptr_ypp_iArray[0], &ptr_ypp_iArray[0]);
    printf("ptr_iArray[1] = %d \t\t At Address &ptr_iArray[1] : %p\n", ptr_ypp_iArray[1], &ptr_ypp_iArray[1]);
    printf("ptr_iArray[2] = %d \t\t At Address &ptr_iArray[2] : %p\n", ptr_ypp_iArray[2], &ptr_ypp_iArray[2]);
    printf("ptr_iArray[3] = %d \t\t At Address &ptr_iArray[3] : %p\n", ptr_ypp_iArray[3], &ptr_ypp_iArray[3]);
    printf("ptr_iArray[4] = %d \t\t At Address &ptr_iArray[4] : %p\n", ptr_ypp_iArray[4], &ptr_ypp_iArray[4]);
    printf("ptr_iArray[5] = %d \t\t At Address &ptr_iArray[5] : %p\n", ptr_ypp_iArray[5], &ptr_ypp_iArray[5]);
    printf("ptr_iArray[6] = %d \t\t At Address &ptr_iArray[6] : %p\n", ptr_ypp_iArray[6], &ptr_ypp_iArray[6]);
    printf("ptr_iArray[7] = %d \t\t At Address &ptr_iArray[7] : %p\n", ptr_ypp_iArray[7], &ptr_ypp_iArray[7]);
    printf("ptr_iArray[8] = %d \t\t At Address &ptr_iArray[8] : %p\n", ptr_ypp_iArray[8], &ptr_ypp_iArray[8]);
    printf("ptr_iArray[9] = %d \t\t At Address &ptr_iArray[9] : %p\n", ptr_ypp_iArray[9], &ptr_ypp_iArray[9]);

    return (0);
}

```
