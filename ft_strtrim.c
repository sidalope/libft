/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:18:56 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/28 14:48:19 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

static char	*skipchars(char *s1, const char *to_skip)
{
	size_t	i;
	size_t	ii;
	
	i = 0;
	while (s1[i])
	{
		ii = 0;
		while (to_skip[ii])
		{
			if (s1[i] == to_skip[ii])
				break ;
			ii++;
			if (!to_skip[ii])
				return (s1 + i);
		}
		i++;
	}
	return (s1 + i);
}

static char	*skiprchars(char *s1, const char *to_skip)
{
	size_t	i;
	size_t	ii;
	char	*return_str;

	return_str = malloc(ft_strlen(s1));
	i = ft_strlen(s1) - 1;
	while (i)
	{
		ii = 0;
		while (to_skip[ii])
		{
			if (s1[i] == to_skip[ii])
				break ;
			ii++;
			if (!to_skip[ii])
			{
				ft_strlcpy(return_str, s1, i + 1);
				return (return_str);
			}
		}
		i--;
	}
	free(return_str);
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp_s1;

	tmp_s1 = malloc(ft_strlen(s1));
	printf("%s\n", s1);
	char	*a = skipchars((char *)s1, set);
	printf("skipchars1: |%s|\n", a);
	char	*b = skiprchars(a, set);
	printf("skipchars2: |%s|\n", b);
	return(tmp_s1);
}


// static char	*skipchars(char *s1, const char *to_skip, int reverse)
// {
// 	size_t	i;
// 	char	*tmp_s1_ptr;

// 	i = 0;
// 	tmp_s1_ptr = s1;
// 	if(reverse)
// 		tmp_s1_ptr = s1 + ft_strlen(s1) - 1;
// 	// printf("last char: %c, strlen: %zu\n", *tmp_s1_ptr, ft_strlen(s1));
// 	while (*tmp_s1_ptr)
// 	{
// 		// printf("to compare: %c\n", *tmp_s1_ptr);
// 		while (to_skip[i])
// 		{
// 			// printf("to skip: %c\n", to_skip[i]);
// 			if (*tmp_s1_ptr == to_skip[i])
// 				break ;
// 			i++;
// 			if (!to_skip[i])
// 				return (tmp_s1_ptr);
// 		}
// 		// printf("\n");
// 		i = 0;
// 		if (reverse)
// 			tmp_s1_ptr--;
// 		else
// 			tmp_s1_ptr++;
// 	}
// 	return (tmp_s1_ptr);
// }