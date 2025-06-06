/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:11:20 by abisiani          #+#    #+#             */
/*   Updated: 2025/06/06 14:03:45 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_strings(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (!in_word && s[i] != c)
		{
			in_word = 1;
			count++;
		}
		if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static size_t	wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*free_strings(char **strings)
{
	size_t	i;

	if (!strings)
		return (NULL);
	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	strings_count;
	char	**strings;

	i = 0;
	strings_count = count_strings(s, c);
	strings = (char **) malloc((strings_count + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			*strings = malloc(wordlen(s + i, c) + 1);
			if (!*strings)
				return (free_strings(strings));
			ft_strlcpy(*strings, s + i, wordlen(s + i, c) + 1);
			strings++;
			i += wordlen(s + i, c);
		}
		else
			i++;
	}
	*strings = (void *) 0;
	return (strings -= strings_count);
}
