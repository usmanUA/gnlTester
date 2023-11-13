/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:53:55 by uahmed            #+#    #+#             */
/*   Updated: 2023/11/13 15:00:21 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char *call;
	char *ft_call;

	
// ############|||||| FT_ATOI ||||||############
	printf("\n\n-*-*-*-*-*-*-*-TESTING FT_ATOI-*-*-*-*-*-*-*-\n\n");
	printf("atoi returns: %d for +123456789123456789123456789\n", atoi("+123456789123456789123456789"));
	printf("\n\nNext Test: \n\n");
	printf("ft_atoi returns: %d for +123456789123456789123456789\n", ft_atoi("+123456789123456789123456789"));
	printf("\n\nNext Test: \n\n");
	printf("atoi returns: %d for 1.5e3\n", atoi("1.5e3"));
	printf("\n\nNext Test: \n\n");
	printf("ftatoi returns: %d for 1.5e3\n", ft_atoi("1.5e3"));
	printf("\n\nNext Test: \n\n");
	printf("atoi returns: %d for 0b1111111111111111111111111111111\n", atoi("0b1111111111111111111111111111111"));
	printf("\n\nNext Test: \n\n");
	printf("ft_atoi returns: %d for 0b1111111111111111111111111111111\n", ft_atoi("0b1111111111111111111111111111111"));
	printf("\n\nNext Test: \n\n");
	printf("atoi returns: %d for -9223372036854775808\n", atoi("-9223372036854775808"));
	printf("ft_atoi returns: %d for -9223372036854775808\n", ft_atoi("-9223372036854775808"));
	printf("\n\nNext Test: \n\n");
	printf("atoi returns: %d for 0x7FFFFFFF\n", atoi("0x7FFFFFFF"));
	printf("ft_atoi returns: %d for 0x7FFFFFFF\n", ft_atoi("0x7FFFFFFF"));
	printf("\n\nNext Test: \n\n");
	printf("atoi returns: %d for -2147483649\n", atoi("-2147483649"));
	printf("ft_atoi returns: %d for -2147483649\n", ft_atoi("-2147483649"));
	printf("\n\nNext Test: \n\n");
	printf("atoi returns: %d for 12.34\n", atoi("12.34"));
	printf("ft_atoi returns: %d for 12.34\n", ft_atoi("12.34"));
	printf("\n\nNext Test: \n\n");
	printf("atoi returns: %d for 0x123\n", atoi("0x123"));
	printf("ft_atoi returns: %d for 0x123\n", ft_atoi("0x123"));
	printf("\n\nNext Test: \n\n");
	printf("atoi returns: %d for 1e50\n", atoi("1e50"));
	printf("ft_atoi returns: %d for 1e50\n", ft_atoi("1e50"));
	printf("\n\nNext Test: \n\n");
	printf("atoi returns: %d for abc123\n", atoi("abc123"));
	printf("ft_atoi returns: %d for abc123\n", ft_atoi("abc123"));
	printf("\n\nNext Function: \n\n");

	printf("\n\n\n\n-*-*-*-*-*-*-*-TESTING FT_CALLOC-*-*-*-*-*-*-*-\n\n");
	if (calloc(1, 1) != ft_calloc(1, 1))
		printf("ft_calloc does not work with (1, 1))");
	else
		printf("ft_calloc PASSED a TEST");
	printf("\n\nNext Test: \n\n");
	if (calloc(1, 0) != ft_calloc(1, 0))
		printf("ft_calloc does not work with (1, 0))");
	else
		printf("ft_calloc PASSED a TEST");
	printf("\n\nNext Test: \n\n");
	if (calloc(0, 0) != ft_calloc(0, 0))
		printf("ft_calloc does not work with (0, 0))");
	else
		printf("ft_calloc PASSED a TEST");
	printf("\n\nNext Test: \n\n");
	if (calloc(47123897375317551757173157, 2) != ft_calloc(47123897375317551757173157, 2))
		printf("ft_calloc does not work with (47123897375317551757173157, 2))");
	else
		printf("ft_calloc PASSED a TEST");
	printf("\n\nNext Test: \n\n");
	if (calloc(1, 15) != ft_calloc(1, 15))
		printf("ft_calloc does not work with (1, 15))");
	else
		printf("ft_calloc PASSED a TEST");
	printf("\n\nNext Test: \n\n");
	if (calloc(151351351345, 1423421342134) != ft_calloc(151351351345, 1423421342134))
		printf("ft_calloc does not work with (1, 1))");
	else
		printf("ft_calloc PASSED a TEST");
	if (calloc(18446744073709551615, 0) != ft_calloc(18446744073709551615, 0))
		printf("ft_calloc does not work with (18446744073709551615, 0))");
	else
		printf("ft_calloc PASSED a TEST");



	printf("\n\n\n\n I will STOP here! THANKS for your patience!!!\n\n");

}
