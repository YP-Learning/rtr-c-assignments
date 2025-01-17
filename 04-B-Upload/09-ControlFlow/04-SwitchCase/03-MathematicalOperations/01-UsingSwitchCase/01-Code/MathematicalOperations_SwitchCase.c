#include <stdio.h>
#include <conio.h>

int main(void)
{
    int ypp_a, ypp_b;
    int ypp_result;

    char ypp_option, ypp_option_division;

    printf("\n\n");
    printf("Enter the value of a: ");
    scanf("%d", &ypp_a);

    printf("Enter the value of b: ");
    scanf("%d", &ypp_b);

    printf("Enter Option in Character : \n\n");
    printf("'A' or 'a' for Addition : \n");
    printf("'S' or 's' for Subtraction : \n");
    printf("'M' or 'm' for Multiplication : \n");
    printf("'D' or 'd' for Division : \n\n");
    printf("Enter Option : ");
    ypp_option = getch();

    printf("\n\n");

    switch (ypp_option)
    {
    case 'A':
    case 'a':
        ypp_result = ypp_a + ypp_b;
        printf("Addition of %d and %d Gives Result %d\n", ypp_a, ypp_b, ypp_result);
        break;

    case 'S':
    case 's':
        if (ypp_a >= ypp_b)
        {
            ypp_result = ypp_a - ypp_b;
            printf("Subtraction of %d and %d Gives Result %d\n", ypp_a, ypp_b, ypp_result);
            break;
        }
        else
        {
            ypp_result = ypp_b - ypp_a;
            printf("Subtraction of %d and %d Gives Result %d\n", ypp_b, ypp_a, ypp_result);
            break;
        }
    case 'M':
    case 'm':
        ypp_result = ypp_a * ypp_b;
        printf("Multiplication of %d and %d Gives Result %d\n", ypp_a, ypp_b, ypp_result);
        break;

    case 'D':
    case 'd':
        printf("Enter Option in Character : \n\n");
        printf("'Q' or 'q' or '/' for Quotient : \n");
        printf("'R' or 'r' or '%%' for Remainder : \n\n");
        printf("Enter Option : ");
        ypp_option_division = getch();

        printf("\n\n");

        switch (ypp_option_division)
        {
        case 'Q':
        case 'q':
        case '/':
            if (ypp_a >= ypp_b)
            {
                ypp_result = ypp_a / ypp_b;
                printf("Division of %d and %d Gives Quotient %d\n", ypp_a, ypp_b, ypp_result);
                break;
            }
            else
            {
                ypp_result = ypp_b / ypp_a;
                printf("Division of %d and %d Gives Quotient %d\n", ypp_b, ypp_a, ypp_result);
                break;
            }
        case 'R':
        case 'r':
        case '%':
            if (ypp_a >= ypp_b)
            {
                ypp_result = ypp_a % ypp_b;
                printf("Division of %d and %d Gives Remainder %d\n", ypp_a, ypp_b, ypp_result);
                break;
            }
            else
            {
                ypp_result = ypp_b % ypp_a;
                printf("Division of %d and %d Gives Remainder %d\n", ypp_b, ypp_a, ypp_result);
                break;
            }
            break;
        }
        break;
    default:
        printf("Invalid Character %c Entered!!! Please Try Again...\n\n", ypp_option);
        break;
    }

    printf("Switch Case Statement Execution Completed!!!\n\n");

    return (0);
}
