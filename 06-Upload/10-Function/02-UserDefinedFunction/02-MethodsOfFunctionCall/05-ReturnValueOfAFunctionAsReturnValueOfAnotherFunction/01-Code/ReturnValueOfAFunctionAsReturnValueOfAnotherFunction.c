#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int ypp_num_01, ypp_num_02;

    ypp_num_01 = 10;
    ypp_num_02 = 20;

    printf("\n\n");
    printf("%d + %d = %d\n", ypp_num_01, ypp_num_02, MyAddition(ypp_num_01, ypp_num_02));
    printf("\n\n");

    return (0);
}

int MyAddition(int x, int y)
{
    int Add(int, int);

    return (Add(x, y));
}

int Add(int a, int b)
{
    return (a + b);
}
