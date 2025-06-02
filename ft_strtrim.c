/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:18:56 by abisiani          #+#    #+#             */
/*   Updated: 2025/06/02 21:38:23 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	skipfront(const char *s1, const char *to_skip)
{
	size_t	i;
	size_t	ii;

	i = 0;
	if (!*to_skip)
		return ((size_t) 0);
	while (s1[i])
	{
		ii = 0;
		while (to_skip[ii])
		{
			if (s1[i] == to_skip[ii])
				break ;
			ii++;
			if (!to_skip[ii])
				return (i);
		}
		i++;
	}
	return (i);
}

static size_t	skiprear(const char *s1, const char *to_skip)
{
	size_t	i;
	size_t	ii;

	i = ft_strlen(s1) - 1;
	if (!*to_skip && *s1)
		return ((size_t) i);
	while (s1[i])
	{
		ii = 0;
		while (to_skip[ii])
		{
			if (s1[i] == to_skip[ii])
				break ;
			ii++;
			if (!to_skip[ii])
				return (i);
		}
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*tmp;
	char		*s1_cpy;
	size_t		start;
	size_t		end;

	tmp = s1;
	start = skipfront(s1, set);
	end = skiprear(s1, set);
	s1_cpy = ft_calloc(end - start + 2, 1);
	if (!*set)
	{
		ft_strlcpy(s1_cpy, s1, ft_strlen(s1) + 1);
		return (s1_cpy);
	}
	if(!*s1)
		return (s1_cpy);
	ft_strlcpy(s1_cpy, tmp + start, end - start + 2);
	
	return (s1_cpy);
}