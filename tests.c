/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:34:31 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/12 19:54:57 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isalpha(void)
{
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('2') == 0);
	printf("ft_isalpha OK\n");
}

void	test_isdigit(void)
{
	assert(ft_isdigit('3') == 51);
	assert(ft_isdigit('0') == 48);
	assert(ft_isdigit('9') == 57);
	assert(ft_isdigit('\n') == 0);
	assert(ft_isdigit(3) == 0);
	printf("ft_isdigit OK\n");
}

void	test_isalnum(void)
{
	assert(ft_isalnum('3') == 51);
	assert(ft_isalnum('0') == 48);
	assert(ft_isalnum('9') == 57);
	assert(ft_isalnum('\n') == 0);
	assert(ft_isalnum(3) == 0);
	printf("ft_isalnum OK\n");
}

void	test_tolower(void)
{
	assert(ft_tolower('A') == 'a');
	assert(ft_tolower('3') == '3');
	assert(ft_tolower('\n') == '\n');
	printf("ft_tolower OK\n");
}

void	test_toupper(void)
{
	assert(ft_toupper('a') == 'A');
	assert(ft_toupper('3') == '3');
	assert(ft_toupper('\n') == '\n');
	printf("ft_toupper OK\n");
}

void	test_atoi(void)
{
// 	printf("%i\n", ft_atoi(""));
// 	printf("%i\n", ft_atoi("5hj"));
// 	printf("%i\n", ft_atoi("++-+++++598567"));
// 	printf("%i\n", ft_atoi("-+++++++598567"));
// 	printf("%i\n", ft_atoi("-+++-+++598567"));
// 	printf("%i\n", ft_atoi("      -+-+-+++598567"));
// 	printf("%i\n", ft_atoi("     -+-+-+++598567dtntn"));
// 	printf("%i\n", ft_atoi("    -+-+-+++598567xndn4568568"));
}

int	main(void)
{
	test_isalpha();
	test_isdigit();

	test_tolower();
	test_toupper();
	return (0);
}