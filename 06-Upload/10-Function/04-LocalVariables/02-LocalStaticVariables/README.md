# LocalStaticVariables

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots
![output.png](./02-Screenshots/output.png)

## Code
### [LocalStaticVariables.c](./01-Code/LocalStaticVariables.c)
```c
#include <stdio.h>

int main(void)
{
    int ypp_a = 5;

    void change_count(void);

    printf("\n\n");
    printf("A = %d\n\n", ypp_a);

    change_count();

    change_count();

    change_count();

    return (0);
}

void change_count(void)
{
    static int local_count = 0;

    local_count = local_count + 1;

    printf("Local Count = %d\n", local_count);
}

```
