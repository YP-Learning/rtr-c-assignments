# IntegerArrayAddresses

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots

## Code
### [IntegerArrayAddresses.c](./01-Code/IntegerArrayAddresses.c)
```c
#include <stdio.h>

int main(void)
{
    int ypp_iArray[10];
    int i;

    for (i = 0; i < 10; i++)
        ypp_iArray[i] = (i + 1) * 10;

    printf("\n\n");
    printf("Elements o the Integer Array: \n\n");
    for (i = 0; i < 10; i++)
        printf("ypp_iArray[%d] = %d\n", i, ypp_iArray[i]);

    printf("\n\n");
    printf("Elements of the Integer Array \\w Addresses: ");
    for (i = 0; i < 10; i++)
        printf("ypp_iArray[%d] = %d \t\t Adress = %p\n", i, ypp_iArray[i], &ypp_iArray[i]);

    printf("\n\n");

    return (0);
}
```
