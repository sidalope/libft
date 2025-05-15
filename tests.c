/* ************************************************************************** */

/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:34:31 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/13 17:36:26 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "libft.h"

void	test_isalpha(void)
{
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('2') == 0);
	printf("ft_isalpha	OK\n");
}

void	test_isdigit(void)
{
	assert(ft_isdigit('3') == 51);
	assert(ft_isdigit('0') == 48);
	assert(ft_isdigit('9') == 57);
	assert(ft_isdigit('\n') == 0);
	assert(ft_isdigit(3) == 0);
	printf("ft_isdigit	OK\n");
}

void	test_isalnum(void)
{
	assert(ft_isalnum('3') == 51);
	assert(ft_isalnum('0') == 48);
	assert(ft_isalnum('9') == 57);
	assert(ft_isalnum('\n') == 0);
	assert(ft_isalnum(3) == 0);
	printf("ft_isalnum	OK\n");
}

void	test_isascii(void)
{
	assert(ft_isascii('0') == 1);
	assert(ft_isascii('A') == 1);
	assert(ft_isascii('\n') == 1);
	assert(ft_isascii(0) == 1);
	assert(ft_isascii(127) == 0);
	assert(ft_isascii(-1) == 0);
	assert(ft_isascii(128) == 0);
	assert(ft_isascii(466) == 0);
	printf("ft_isascii	OK\n");
}

void	test_isprint(void)
{
	assert(ft_isprint(' ') == 1);
	assert(ft_isprint(126) == 1);
	assert(ft_isprint(127) == 0);
	assert(ft_isprint(-1) == 0);
	assert(ft_isprint(30) == 0);
	printf("ft_isprint OK\n");
}

void	test_strlen(void)
{
	assert(ft_strlen("") == 0);
	assert(ft_strlen("abc def") == 7);
	assert(ft_strlen("a") == 1);
	printf("ft_strlen	OK\n");
}

void	test_memset(void)
{
	char	*str;

	str = "123456789";
	//assert(ft_memset(str, 'f', 3) == str);
	// str = "123456789";
	assert(ft_memset(str, 68, 1) == str);
	assert(str[0] == '1');
	// assert(str[0] == 'f' && str[1] == 'f' && str[2] == 'f' && str[3] == '4');
	printf("ft_memset	OK\n");
}


void	test_tolower(void)
{
	assert(ft_tolower('A') == 'a');
	assert(ft_tolower('3') == '3');
	assert(ft_tolower('\n') == '\n');
	printf("ft_tolower	OK\n");
}

void	test_toupper(void)
{
	assert(ft_toupper('a') == 'A');
	assert(ft_toupper('3') == '3');
	assert(ft_toupper('\n') == '\n');
	printf("ft_toupper	OK\n");
}

void	test_atoi(void)
{
	// printf("%i\n", ft_atoi(""));
	// printf("%i\n", ft_atoi("5hj"));
	// printf("%i\n", ft_atoi("++-+++++598567"));
	// printf("%i\n", ft_atoi("-+++++++598567"));
	// printf("%i\n", ft_atoi("-+++-+++598567"));
	// printf("%i\n", ft_atoi("      -+-+-+++598567"));
	// printf("%i\n", ft_atoi("     -+-+-+++598567dtntn"));
	// printf("%i\n", ft_atoi("    -+-+-+++598567xndn4568568"));
}

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	// test_bzero();
	// test_memcpy();
	// test_memmove();
	// test_strlcpy();
	test_tolower();
	test_toupper();
	// test_strlcat();
	// test_strchr();
	// test_strrchr();
	// test_strncmp();
	// test_memchr();
	// test_memcmp();
	// test_strnstr();
	// test_atoi();
	// test_substr();
	// test_strjoin();
	// test_strtrim();
	// test_split();
	// test_itoa();
	// test_strmapi();
	// test_striteri();
	// test_putchar_fd();
	// test_putstr_fd();
	// test_putendl_fd();
	// test_putnbr_fd();
	return (0);
}