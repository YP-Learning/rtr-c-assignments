#include <stdio.h>

int main(void)
{
    int ypp_i, ypp_j, ypp_k;

    printf("\n\n");
    ypp_i = 1;

    while (ypp_i <= 10)
    {
        printf("i = %d\n", ypp_i);
        printf("--------------------\n");

        ypp_j = 1;
        while (ypp_j <= 5)
        {
            printf("\tj = %d\n", ypp_j);
            ypp_j++;

            ypp_k = 1;
            while (ypp_k <= 3)
            {
                printf("\t\tk = %d\n", ypp_k);
                ypp_k++;
            }
        }

        printf("\n");
        ypp_i++;
    }

    return (0);
}
