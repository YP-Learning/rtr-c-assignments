#include <stdio.h>

struct MyData
{
    int i;
    float f;
    double d;
    char c;
} ypp_data;

int main(void)
{
    int ypp_i_size;
    int ypp_f_size;
    int ypp_d_size;
    int ypp_c_size;

    int ypp_struct_MyData_size;

    ypp_data.i = 30;
    ypp_data.f = 11.45f;
    ypp_data.d = 1.2995;

    printf("\n\n");
    printf("Data Members Of 'struct MyData' Are: \n\n");
    printf("i = %d\n", ypp_data.i);
    printf("f = %f\n", ypp_data.f);
    printf("d = %lf\n", ypp_data.d);

    ypp_i_size = sizeof(ypp_data.i);
    ypp_f_size = sizeof(ypp_data.f);
    ypp_d_size = sizeof(ypp_data.d);

    printf("\n\n");
    printf("Sizes (in bytes) of Data Members of 'struct MyData' Are: \n\n");

    printf("Size of 'i' = %d bytes\n", ypp_i_size);
    printf("Size of 'f' = %d bytes\n", ypp_f_size);
    printf("Size of 'd' = %d bytes\n", ypp_d_size);

    ypp_struct_MyData_size = sizeof(ypp_data);

    printf("\n\n");
    printf("Size of 'struct MyData' = %d bytes\n", ypp_struct_MyData_size);
}
