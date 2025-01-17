#include <stdio.h>

int main(void)
{
    int ypp_a;

    printf("\n\n");

    ypp_a = 5;
    if (ypp_a)
    {
        printf("if-block 1: 'A' Exists and Has Value = %d!!!\n\n", ypp_a);
    }

    ypp_a = -5;
    if (ypp_a)
    {
        printf("if-block 2: 'A' Exists and Has Value %d!!!\n\n", ypp_a);
    }

    ypp_a = 0;
    if (ypp_a)
    {
        printf("if-block 3: 'A' Exists and Has Value = %d !!!\n\n", ypp_a);
    }

    printf("All Three if_statements Are Done!!!\n\n");

    return (0);
}