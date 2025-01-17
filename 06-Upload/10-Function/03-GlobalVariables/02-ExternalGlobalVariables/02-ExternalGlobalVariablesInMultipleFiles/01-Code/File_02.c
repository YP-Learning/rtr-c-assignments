#include <stdio.h>

void change_count_two(void)
{
    extern int ypp_global_count;

    ypp_global_count = ypp_global_count + 1;

    printf("change_count_two() : Value Of ypp_global_count in File_02 = %d\n", ypp_global_count);
}
