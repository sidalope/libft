/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:18:56 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/31 18:46:25 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

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
	char	*a;
	char	*b;

	a = skipchars((char *)s1, set);
	b = skiprchars(a, set);
	tmp_s1 = malloc(ft_strlen(s1));
	printf("%s\n", s1);
	printf("skipchars1: |%s|\n", a);
	printf("skipchars2: |%s|\n", b);
	return (tmp_s1);
}
