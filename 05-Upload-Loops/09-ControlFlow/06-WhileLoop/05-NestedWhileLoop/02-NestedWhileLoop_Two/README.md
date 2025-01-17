# NestedWhileLoop_Two

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots
![01-output.png](./02-Screenshots/01-output.png)
![02-output.png](./02-Screenshots/02-output.png)
![03-output.png](./02-Screenshots/03-output.png)
![04-output.png](./02-Screenshots/04-output.png)
![05-output.png](./02-Screenshots/05-output.png)

## Code
### [NestedWhileLoop_Two.c](./01-Code/NestedWhileLoop_Two.c)
```c
#include <stdio.h>

int main(void)
{
    int ypp_i, ypp_j, ypp_k;

    printf("\n\n");
    ypp_i = 1;

    while (ypp_i <= 10)
    {
        printf("i = %d\n", ypp_i);
        printf("--------------------\n");

        ypp_j = 1;
        while (ypp_j <= 5)
        {
            printf("\tj = %d\n", ypp_j);
            ypp_j++;

            ypp_k = 1;
            while (ypp_k <= 3)
            {
                printf("\t\tk = %d\n", ypp_k);
                ypp_k++;
            }
        }

        printf("\n");
        ypp_i++;
    }

    return (0);
}

```
