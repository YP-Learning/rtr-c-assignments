# SingleStructVariableInlineInitialization

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots
![Screenshot 2025-01-17 184604.png](./02-Screenshots/Screenshot 2025-01-17 184604.png)

## Code
### [SingleStructVariableInlineInitialization.c](./01-Code/SingleStructVariableInlineInitialization.c)
```c
#include <stdio.h>

struct MyData
{
    int i;
    float f;
    double d;
    char c;
} ypp_data = { 30, 4.5f, 11.451995, 'A' };

int main(void)
{
    printf("\n\n");
    printf("Data members of 'struct MyData' are: \n");
    printf("i = %d\n", ypp_data.i);
    printf("f = %f\n", ypp_data.f);
    printf("d = %lf\n", ypp_data.d);
    printf("c = %c\n", ypp_data.c);

    return (0);
}

```
