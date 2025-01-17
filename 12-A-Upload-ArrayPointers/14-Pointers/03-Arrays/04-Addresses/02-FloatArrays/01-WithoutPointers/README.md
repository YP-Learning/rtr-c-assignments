# FloatArrayAddresses

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots

## Code
### [FloatArrayAddresses.c](./01-Code/FloatArrayAddresses.c)
```c
#include <stdio.h>

int main(void)
{
    float ypp_fArray[10];
    int i;

    for (i = 0; i < 10; i++)
        ypp_fArray[i] = (float)(i + 1) * 1.5f;

    printf("\n\n");
    printf("Elements of the Float Array: \n\n");
    for (i = 0; i < 10; i++)
        printf("ypp_fArray[%d] = %f\n", i, ypp_fArray[i]);

    printf("\n\n");
    printf("Elements of the Float Array \\w Addresses: \n");
    for (i = 0; i < 10; i++)
        printf("ypp_fArray[%d] = %f \t\t Address = %p\n", i, ypp_fArray[i], &ypp_fArray[i]);

    printf("\n\n");

    return (0);
}
```
