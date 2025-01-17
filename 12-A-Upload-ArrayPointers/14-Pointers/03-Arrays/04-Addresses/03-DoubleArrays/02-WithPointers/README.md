# DoubleArrayAddresses

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots

## Code
### [DoubleArrayAddresses.c](./01-Code/DoubleArrayAddresses.c)
```c
#include <stdio.h>

int main(void)
{
    double ypp_dArray[10];
    double *ptr_ypp_dArray = NULL;
    int i;

    for (i = 0; i < 10; i++)
        ypp_dArray[i] = (i + 1) * 1.3333;

    ptr_ypp_dArray = ypp_dArray;

    printf("\n\n");
    printf("Elements of the Double Array: \n\n");
    for (i = 0; i < 10; i++)
        printf("ypp_dArray[%d] = %lf\n", i, *(ptr_ypp_dArray + i));

    printf("\n\n");
    printf("Elements of the Double Array \\w Addresses: ");
    for (i = 0; i < 10; i++)
        printf("ypp_dArray[%d] = %lf \t\t Address = %p\n", i, *(ypp_dArray + i), (ypp_dArray + i));

    printf("\n\n");
     
    return (0);
}

```
