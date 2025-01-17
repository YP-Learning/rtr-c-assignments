#include <stdio.h>

int main(void)
{
    double ypp_dArray[10];
    int i;

    for (i = 0; i < 10; i++)
        ypp_dArray[i] = (double)(i + 1) * 1.3333333;

    printf("\n\n");
    printf("Elements of the Double Array: \n\n");
    for (i = 0; i < 10; i++)
        printf("ypp_dArray[%d] = %lf\n", i, ypp_dArray[i]);

    printf("\n\n");
    printf("Elements of the Double Array \\w Addresses: \n\n");
    for (i = 0; i < 10; i++)
        printf("ypp_dArray[%d] = %lf \t\t Adress = %p\n", i, ypp_dArray[i], &ypp_dArray[i]);

    printf("\n\n");

    return (0);
}