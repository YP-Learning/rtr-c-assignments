#include <Stdio.h>

int ypp_global_count = 0;

int main(void)
{
    void change_count(void);
    void change_count_one(void);
    void change_count_two(void);

    printf("\n");

    change_count();
    change_count_one();
    change_count_two();

    printf("\n");

    return (0);
}

void change_count(void)
{
    ypp_global_count = ypp_global_count + 1;

    printf("change_count() : Value Of ypp_global_count = %d\n", ypp_global_count);
}
