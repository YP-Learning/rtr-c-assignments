#include <stdio.h>

int main(void)
{
    int ypp_cArray[10];
    int i;

    for (i = 0; i < 10; i++)
        ypp_cArray[i] = (char)(i + 65);

    printf("\n\n");
    printf("Elements of the Character Array: \n\n");
    for (i = 0; i < 10; i++)
        printf("ypp_cArray[%d] = %c\n", i, ypp_cArray[i]);

    printf("\n\n");
    printf("Elements of the Character Array \\w Addresses: \n");
    for (i = 0; i < 10; i++)
        printf("ypp_cArray[%d] = %c \t\t Adress = %p\n", i, ypp_cArray[i], &ypp_cArray[i]);

    printf("\n\n");

    return (0);
}