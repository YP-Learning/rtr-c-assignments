#include <stdio.h>

int main(void)
{
    float ypp_f;
    float ypp_f_num = 1.7f;

    printf("\n\n");

    printf("Printing Numbers %f to %f : \n\n", ypp_f_num, ypp_f_num * 10.0f);

    ypp_f = ypp_f_num;

    do 
    {
        printf("\t%f\n", ypp_f);
        ypp_f += ypp_f_num;
    } while (ypp_f <= (ypp_f_num * 10.0f));

    printf("\n\n");
    return (0);
}