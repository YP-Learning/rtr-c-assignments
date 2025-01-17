# StringInputOutput

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots
![output.png](./02-Screenshots/output.png)

## Code
### [StringInputOutput.c](./01-Code/StringInputOutput.c)
```c
#include <stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char ypp_chArray[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter a string: ");
    gets_s(ypp_chArray, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("Stirng You entered Is : \n\n");
    printf("%s\n", ypp_chArray);

    return (0);
}

```
