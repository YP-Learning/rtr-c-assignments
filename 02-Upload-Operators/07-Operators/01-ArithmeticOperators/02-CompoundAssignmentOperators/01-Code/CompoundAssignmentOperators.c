#include <stdio.h>

int main(void)
{
	// Variable declarations
	int ypp_a;
	int ypp_b;
	int ypp_x;

	// Code
	printf("\n\n");
	printf("Enter A Number: ");
	scanf("%d", &ypp_a);

	printf("\n\n");
	printf("Enter Another Number: ");
	scanf("%d", &ypp_b);

	printf("\n\n");

	ypp_x = ypp_a;
	ypp_a += ypp_b; // a = a + b
	printf("Addition of A = %d And B = %d Gives %d.\n", ypp_x, ypp_b, ypp_a);

	ypp_x = ypp_a;
	ypp_a -= ypp_b;
	printf("Subtraction of A = %d And B = %d Gives %d.\n", ypp_x, ypp_b, ypp_a);

	ypp_x = ypp_a;
	ypp_a *= ypp_b;
	printf("Multiplication of A = %d And B = %d Gives %d.\n", ypp_x, ypp_b, ypp_a);

	ypp_x = ypp_a;
	ypp_a /= ypp_b;
	printf("Division Of A = %d And B = %d Gives Quotient %d.\n", ypp_x, ypp_b, ypp_a);

	ypp_x = ypp_a;
	ypp_a %= ypp_b;
	printf("Division of A = %d And B = %d Gives Remainder %d.\n", ypp_x, ypp_b, ypp_a);

	printf("\n\n");

	return(0);
}

