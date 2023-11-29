#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main()
{
    int p_char;

    int fp_char;

	p_char = printf(" %d \n", -1234);
	fp_char = ft_printf(" %d \n", -1234);
	printf("\n");
	printf("printf prints %d characters for -1234\n", p_char);
	printf("ft_printf prints %d characters for -1234\n", fp_char);	
	printf("\n");
	printf("|||||*********************************************|||||\n");
	p_char = printf(" %d \n", INT_MIN);
	fp_char = ft_printf(" %d \n", INT_MIN);
	printf("\n");
	printf("printf prints %d characters for INT_MIN\n", p_char);
	printf("ft_printf prints %d characters for INT_MIN\n", fp_char);
	printf("\n");
	printf("|||||*********************************************|||||\n");
	p_char = printf(" %d \n", INT_MAX);
	fp_char = ft_printf(" %d \n", INT_MAX);
	printf("\n");
	printf("printf prints %d characters for INT_MAX\n", p_char);
	printf("ft_printf prints %d characters for INT_MAX\n", fp_char);
	printf("\n");
	printf("|||||*********************************************|||||\n");
	p_char = printf(" %u \n", UINT_MAX);
	fp_char = ft_printf(" %u \n", UINT_MAX);
	printf("\n");
	printf("printf prints %d characters for UINT_MAX\n", p_char);
	printf("ft_printf prints %d characters for UINT_MAX\n", fp_char);

	printf("\n");
	p_char = printf(" % \n");
	fp_char = ft_printf(" % \n");
	printf("printf prints %d characters for %\n", p_char);
	printf("ft_printf prints %d characters for %\n", fp_char);

	printf("\n");
	p_char = printf(" %x \n", 1234);
	fp_char = ft_printf(" %x \n", 1234);
	printf("printf prints %d characters for x = 1234\n", p_char);
	printf("ft_printf prints %d characters for x = 1234\n", fp_char);


	// p_char = printf(" %d \n", -1234);
	// fp_char = ft_printf(" %d \n", -1234);
	// printf("printf prints %d characters for -1234\n", p_char);
	// printf("ft_printf prints %d characters for -1234\n", fp_char);


	// p_char = printf(" %d \n", -1234);
	// fp_char = ft_printf(" %d \n", -1234);
	// printf("printf prints %d characters for -1234\n", p_char);
	// printf("ft_printf prints %d characters for -1234\n", fp_char);


	// p_char = printf(" %d \n", -1234);
	// fp_char = ft_printf(" %d \n", -1234);
	// printf("printf prints %d characters for -1234\n", p_char);
	// printf("ft_printf prints %d characters for -1234\n", fp_char);


	// p_char = printf(" %d \n", -1234);
	// fp_char = ft_printf(" %d \n", -1234);
	// printf("printf prints %d characters for -1234\n", p_char);
	// printf("ft_printf prints %d characters for -1234\n", fp_char);


	// p_char = printf(" %d \n", -1234);
	// fp_char = ft_printf(" %d \n", -1234);
	// printf("printf prints %d characters for -1234\n", p_char);
	// printf("ft_printf prints %d characters for -1234\n", fp_char);


}
