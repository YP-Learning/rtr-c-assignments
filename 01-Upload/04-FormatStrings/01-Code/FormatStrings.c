#include <stdio.h>

int main(void)
{
	// Code
	printf("\n\n");

	printf("******************************************************************");
	printf("\n\n");

	printf("Hello World!!\n");

	int ypp_a = 13;
	printf("Decimal Value Of 'ypp_a' = %d\n", ypp_a);
	printf("Octal Value Of 'ypp_a' = %o\n", ypp_a);
	printf("Hexadecimal Value Of 'ypp_a' = %x (hexadecimal characters in lower case)\n", ypp_a);
	printf("Hexadecimal Value Of 'ypp_a' = %X (hexadecimal characters in UPPER case)\n\n", ypp_a);

	char ypp_ch = 'A';
	printf("Character ypp_ch = %c\n", ypp_ch);

	char ypp_str[] = "AstroMediComp's Real Time Rendering Batch";
	printf("String ypp_str = %s\n\n", ypp_str);

	long ypp_u = 3121995L;
	printf("Long ypp_u = %ld\n\n", ypp_u);

	unsigned int ypp_b = 7;
	printf("unsigned int ypp_b = %u\n\n", ypp_b);

	float ypp_f_num = 3012.1995f;
	printf("floating point number with just %%f = %f\n", ypp_f_num);
	printf("floating point number with %%4.2f = %4.2f\n", ypp_f_num);
	printf("floating point number with %%6.5f = %6.5f\n", ypp_f_num);

	double ypp_d_pi = 3.1415965358979323846;
	printf("Double Precision floating point number without exponential = %g\n", ypp_d_pi);
	printf("Double Precision floating point number with exponential (lower case) = %e\n", ypp_d_pi);
	printf("Double Precision floating point number with exponential (upper case) = %E\n", ypp_d_pi);
	printf("Double Hexadecimal value of 'ypp_d_pi' (lower case) = %a\n", ypp_d_pi);
	printf("Double Hexadecimal value of 'ypp_d_pi' (upper case) = %A\n", ypp_d_pi);

	printf("************************************************************************");
	printf("\n\n");

	return (0);
}
