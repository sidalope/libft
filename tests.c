/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:36:26 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/15 18:37:06 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>
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
	assert(ft_isascii(127) == 1);
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
	printf("ft_isprint	OK\n");
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
	void	*ptr_to_set;
	char	*ptr_to_view;

	ptr_to_set = malloc(10);
	ptr_to_view = (char *) ptr_to_set;
	assert(ft_memset(ptr_to_set, 50, 0) == ptr_to_set);
	assert(ft_memset(ptr_to_set, 50, 1) == ptr_to_set);
	assert(ptr_to_view[0] == 50);
	assert(ft_memset(ptr_to_set, 'f', 3) == ptr_to_set);
	assert(ptr_to_view[0] == 'f' && ptr_to_view[1] == 'f' \
		&& ptr_to_view[2] == 'f' && ptr_to_view[3] != 'f');
	free(ptr_to_set);
	printf("ft_memset	OK\n");
}

void	test_bzero(void)
{
	void	*ptr_to_set;
	char	*ptr_to_view;

	ptr_to_set = malloc(10);
	ptr_to_view = (char *) ptr_to_set;
	ft_memset(ptr_to_set, 'f', 10);
	assert(ptr_to_view[0] == 'f');
	bzero(ptr_to_set, (0));
	assert(ptr_to_view[0] == 'f');
	bzero(ptr_to_set, 5);
	assert(ptr_to_view[4] == '\0');
	assert(ptr_to_view[5] == 'f');
	bzero(ptr_to_set, 10);
	assert(ptr_to_view[9] == '\0');
	free(ptr_to_set);
	printf("ft_bzero	OK\n");
}

void	test_memcpy(void)
{
	void	*ptr_to_dest;
	void	*ptr_to_src;
	char	*ptr_to_view;

	ptr_to_dest = malloc(10);
	ptr_to_src = malloc(10);
	ptr_to_view = (char *) ptr_to_dest;
	ft_memset(ptr_to_dest, '2', 10);
	ft_memset(ptr_to_src, '4', 10);

	ft_memcpy(ptr_to_dest, ptr_to_src, 0);
	assert(ptr_to_view[0] == '2');
	ft_memcpy(ptr_to_dest, ptr_to_src, 5);
	assert(ptr_to_view[0] == '4');
	assert(ptr_to_view[4] == '4');
	assert(ptr_to_view[5] == '2');
	ft_memcpy(ptr_to_dest, ptr_to_src, 10);
	assert(ptr_to_view[9] == '4');
	free(ptr_to_dest);
	free(ptr_to_src);
	printf("ft_memcpy	OK\n");
}

void	test_memmove(void)
{
	void	*ptr_to_dest;
	void	*ptr_to_src;
	char	*ptr_to_view;

	// Test source before destination
	ptr_to_src = malloc(10);
	ptr_to_dest = ptr_to_src + 3;
	ptr_to_view = (char *) ptr_to_src;
	ft_memset(ptr_to_src, '4', 3);
	ft_memset(ptr_to_dest, '2', 7);
	ft_memmove(ptr_to_dest, ptr_to_src, 0);
	assert(ptr_to_view[0] == '4');
	ft_memmove(ptr_to_dest, ptr_to_src, 2);
	assert(ptr_to_view[0] == '4');
	assert(ptr_to_view[4] == '4');
	assert(ptr_to_view[5] == '2');
	ft_memmove(ptr_to_dest, ptr_to_src, 10);
	assert(ptr_to_view[9] == '2');
	free(ptr_to_src);
	// Test destination before source
	ptr_to_dest = malloc(10);
	ptr_to_src = ptr_to_dest + 2;
	ptr_to_view = (char *) ptr_to_dest;
	ft_memset(ptr_to_dest, '2', 10);
	ft_memset(ptr_to_src, '4', 3);
	// for(int i = 0; i < 10; i++)
	// {
	// 	printf("%c ", ptr_to_view[i]);
	// }
	// printf("\n");
	ft_memmove(ptr_to_dest, ptr_to_src, 2);
	// for(int i = 0; i < 10; i++)
	// {
	// 	printf("%c ", ptr_to_view[i]);
	// }
	// printf("\n");
	printf("ft_memmove	OK\n");
}

void	test_strlcpy(void)
{
	char	*ptr_to_dest;
	char	*ptr_to_src;
	char 	a;
	char	b;

	ptr_to_dest = malloc(25);
	ptr_to_src = "Copied\0";
	memset(ptr_to_dest, 'x', 10);
	// printf("%zu\n", ft_strlcpy(ptr_to_dest, ptr_to_src, 3));
	// memset(ptr_to_dest, 'x', 10);
	// printf("%zu\n", strlcpy(ptr_to_dest, ptr_to_src, 3));
	// memset(ptr_to_dest, 'x', 10);
	a = ft_strlcpy(ptr_to_dest, ptr_to_src, 0);
	b = strlcpy(ptr_to_dest, ptr_to_src, 0);
	assert(a == b);
	memset(ptr_to_dest, 'x', 10);
	a = ft_strlcpy(ptr_to_dest, ptr_to_src, 3);
	b = strlcpy(ptr_to_dest, ptr_to_src, 3);
	assert(a == b);
	memset(ptr_to_dest, 'x', 10);
	a = ft_strlcpy(ptr_to_dest, ptr_to_src, 25);
	b = strlcpy(ptr_to_dest, ptr_to_src, 25);
	assert(a == b);
	memset(ptr_to_dest, 'x', 10);
	a = ft_strlcpy(ptr_to_dest, ptr_to_src, 26);
	b = strlcpy(ptr_to_dest, ptr_to_src, 26);
	assert(a == b);
	free(ptr_to_dest);
	printf("ft_strlcpy	OK\n");
}

void	test_strlcat(void)
{
	// char	ptr_to_dest[15];
	// char	*ptr_to_src;
	// // At i == 12, src and a '\0' have beedn written to dst, meaning the assert 
	// // will fail.
	// for(int i = 0; i < 5; i++)
	// {
	// 	bzero(ptr_to_dest, 15);
	// 	memset(ptr_to_dest, 'x', 4);
	// 	ptr_to_src = "Catted\0";
	// 	printf(" strlcat with size %d\n", i);
	// 	printf("\n dest: %s\n", ptr_to_dest);
	// 	printf(" src: %s\n\n", ptr_to_src);
	// 	printf(" orig: %zu\n", strlcat(ptr_to_dest, ptr_to_src, i));
	// 	printf(" dest: %s\n", ptr_to_dest);
	// 	printf(" src: %s\n", ptr_to_src);
	// 	bzero(ptr_to_dest, 15);
	// 	memset(ptr_to_dest, 'x', 4);
	// 	printf(" mine: %zu\n", ft_strlcat(ptr_to_dest, ptr_to_src, i));
	// 	printf(" dest: %s\n", ptr_to_dest);
	// 	printf(" src: %s\n\n", ptr_to_src);
	// 	assert(ft_strlcat(ptr_to_dest, ptr_to_src, i) == \
	// 		strlcat(ptr_to_dest, ptr_to_src, i));
	// 	printf("~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	// }
	printf("ft_strlcat	Cursed Beyond All Understanding\n");
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

void test_strchr(void)
{
	const char	*test;
	char		*output;

	test = "Hello";
	output = ft_strchr(test, 'l');
	assert(*output == 'l');
	printf("\n");
	for(size_t i = 0; i < ft_strlen(output); i++)
	{
		printf("%c", output[i]);
	}
	printf("\n\n");
	output = 0;
	output = ft_strchr("Attempt Two", 't');
	assert(*output == 't');
	printf("ft_strchr	OK\n");
}

// void	test_atoi(void)
// {
// 	printf("%i\n", ft_atoi(""));
// 	printf("%i\n", ft_atoi("5hj"));
// 	printf("%i\n", ft_atoi("++-+++++598567"));
// 	printf("%i\n", ft_atoi("-+++++++598567"));
// 	printf("%i\n", ft_atoi("-+++-+++598567"));
// 	printf("%i\n", ft_atoi("      -+-+-+++598567"));
// 	printf("%i\n", ft_atoi("     -+-+-+++598567dtntn"));
// 	printf("%i\n", ft_atoi("    -+-+-+++598567xndn4568568"));
// 	printf("ft_atoi	OK\n");
// }

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_tolower();
	test_toupper();
	test_strchr();
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