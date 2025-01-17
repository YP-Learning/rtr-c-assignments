# ExternalGlobalVariablesInMultipleFiles

Submitted by Yash Pravin Pawar (RTR2024-023)

## Output Screenshots
![output.png](./02-Screenshots/output.png)

## Code
### [ExternalGlobalVariablesInMultipleFiles.c](./01-Code/ExternalGlobalVariablesInMultipleFiles.c)
```c
#include <Stdio.h>

int ypp_global_count = 0;

int main(void)
{
    void change_count(void);
    void change_count_one(void);
    void change_count_two(void);

    printf("\n");

    change_count();
    change_count_one();
    change_count_two();

    printf("\n");

    return (0);
}

void change_count(void)
{
    ypp_global_count = ypp_global_count + 1;

    printf("change_count() : Value Of ypp_global_count = %d\n", ypp_global_count);
}

```
### [File_01.c](./01-Code/File_01.c)
```c
#include <stdio.h>

extern int ypp_global_count;

void change_count_one(void)
{
    ypp_global_count = ypp_global_count + 1;

    printf("change_count_one() : Value Of ypp_global_count in File_01 = %d\n", ypp_global_count);
}

```
### [File_02.c](./01-Code/File_02.c)
```c
#include <stdio.h>

void change_count_two(void)
{
    extern int ypp_global_count;

    ypp_global_count = ypp_global_count + 1;

    printf("change_count_two() : Value Of ypp_global_count in File_02 = %d\n", ypp_global_count);
}

```
