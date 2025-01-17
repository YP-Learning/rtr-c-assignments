#include <stdio.h>

int main(void)
{
    float ypp_num;
    float* ptr = NULL;

    ypp_num = 6.9f;

    printf("\n\n");
    printf("##### Before ptr = &ypp_num #####\n\n");
    printf("Value of ypp_num: %f\n", ypp_num);
    printf("Address of ypp_num: %p\n", &ypp_num);
    printf("Value at address of ypp_num: %f\n", *(&ypp_num));

    ptr = &ypp_num;

    printf("\n\n");
    printf("##### After ptr = &ypp_num #####\n\n");
    printf("Value of ypp_num: %f\n", ypp_num);
    printf("Address of ypp_num: %p\n", ptr);
    printf("Value at address of ypp_num: %f\n", *ptr);

    return (0);
}