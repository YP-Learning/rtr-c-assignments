#include <stdio.h>

extern int ypp_global_count;

void change_count_one(void)
{
    ypp_global_count = ypp_global_count + 1;

    printf("change_count_one() : Value Of ypp_global_count in File_01 = %d\n", ypp_global_count);
}
