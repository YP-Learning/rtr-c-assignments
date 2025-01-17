# SingleIteratingVariable

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots
![output.png](./02-Screenshots/output.png)

## Code
### [SingleIteratingVariable.c](./01-Code/SingleIteratingVariable.c)
```c
#include <stdio.h>

int main(void)
{
    int ypp_i;

    printf("\n\n");
    printf("Printing Digits 1 to 10: \n\n");

    ypp_i = 1;
    do
    {
        printf("\t%d\n", ypp_i);
        ypp_i++;
    } while (ypp_i <= 10);

    printf("\n\n");

    return (0);
}

```
