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
