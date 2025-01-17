#include <stdio.h>

int main(void)
{
    int ypp_i, ypp_j;

    printf("\n\n");
    printf("Printing Digits 1 to 10 and 10 to 100: \n\n");

    ypp_i = 1;
    ypp_j = 10;

    while (ypp_i <= 10, ypp_j <= 100)
    {
        printf("\t%d\t%d\n", ypp_i, ypp_j);
        ypp_i++;
        ypp_j += 10;
    }

    printf("\n\n");

    return (0);
}
