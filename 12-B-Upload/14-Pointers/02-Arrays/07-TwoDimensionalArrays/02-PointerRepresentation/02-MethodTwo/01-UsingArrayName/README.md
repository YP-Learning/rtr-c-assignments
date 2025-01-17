# PointerRepresentation

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots
![output (2).png](./02-Screenshots/output (2).png)

## Code
### [PointerRepresentation.c](./01-Code/PointerRepresentation.c)
```c
#include <stdio.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
    int ypp_iArray[NUM_ROWS][NUM_COLUMNS];
    int i, j;

    for (i = 0; i < NUM_ROWS; i++)
    {
        for (j = 0; j < NUM_COLUMNS; j++)
            *(*(ypp_iArray + i) + j) = (i + 1) * (j + 1);
    }

    printf("\n\n");
    printf("2D Integer Array Elements Along with Addressses: \n\n");
    for (i = 0; i < NUM_ROWS; i++)
    {
        for (j = 0; j < NUM_COLUMNS; j++)
        {
            printf("*(*(ypp_iArray + %d) + %d) = %d\t\t At Address (*(ypp_iArray + %d) + %d) : %p\n", i, j, *(*(ypp_iArray + i) + j), i, j, (*(ypp_iArray + i) + j));
        }
        printf("\n\n");
    }

    return (0);
}

```
