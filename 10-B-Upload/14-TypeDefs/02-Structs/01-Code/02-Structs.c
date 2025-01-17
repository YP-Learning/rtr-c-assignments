#include <stdio.h>

#define MAX_NAME_LENGTH 100

struct Employee
{
    char name[MAX_NAME_LENGTH];
    int age;
    char gender;
    float salary;
};

struct MyData
{
    int i;
    float f;
    double d;
    char c;
};

int main(void)
{
    // TypeDefs
    typedef struct Employee MY_EMPLOYEE_TYPE;
    typedef struct MyData MY_DATA_TYPE;

    struct Employee emp = { "Yash Pawar", 19, 'M', 10000.0 };
    MY_EMPLOYEE_TYPE emp_typedef = { "Prajwal Chopade", 20, 'M', 20000.0 };

    struct MyData md = { 10, 20.5, 30.5, 'A' };
    MY_DATA_TYPE md_typedef = { 100, 200.5, 300.5, 'B' };

    // code
    md_typedef.i = 9;
    md_typedef.f = 1.5f;
    md_typedef.d = 8.041997;
    md_typedef.c = 'P';

    printf("\n\n");
    printf("# Struct EMployee: \n\n");
    printf("emp.name           = %s\n", emp.name);
    printf("emp.age            = %d\n", emp.age);
    printf("emp.gender         = %c\n", emp.gender);
    printf("emp.salary         = %f\n", emp.salary);

    printf("\n\n");
    printf("# Typedef Struct Employee: \n\n");
    printf("emp_typedef.name   = %s\n", emp_typedef.name);
    printf("emp_typedef.age    = %d\n", emp_typedef.age);
    printf("emp_typedef.gender = %c\n", emp_typedef.gender);
    printf("emp_typedef.salary = %f\n", emp_typedef.salary);

    printf("\n\n");
    printf("# Struct MyData: \n\n");
    printf("md.i               = %d\n", md.i);
    printf("md.f               = %f\n", md.f);
    printf("md.d               = %f\n", md.d);
    printf("md.c               = %c\n", md.c);

    printf("\n\n");
    printf("# Typedef Struct MyData: \n\n");
    printf("md_typedef.i       = %d\n", md_typedef.i);
    printf("md_typedef.f       = %f\n", md_typedef.f);
    printf("md_typedef.d       = %f\n", md_typedef.d);
    printf("md_typedef.c       = %c\n", md_typedef.c);

    printf("\n\n");
    return (0);
}
