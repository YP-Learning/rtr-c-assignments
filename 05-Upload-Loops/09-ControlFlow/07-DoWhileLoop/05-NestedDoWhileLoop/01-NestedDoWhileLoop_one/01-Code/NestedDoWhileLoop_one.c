#include <stdio.h>

int main(void)
{
    int ypp_i, ypp_j;

    printf("\n\n");

    ypp_i = 1;
    do
    {
        printf("i = %d\n", ypp_i);
        printf("---------\n\n");

        ypp_j = 1;
        do
        {
            printf("\tj = %d\n", ypp_j);
            ypp_j++;
        } while (ypp_j <= 5);

        ypp_i++;
        printf("\n\n");
    } while (ypp_i <= 10);

    return (0);
}
