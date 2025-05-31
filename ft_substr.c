/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:08:42 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/31 19:02:46 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr_substring;

	i = 0;
	ptr_substring = ft_calloc(ft_strlen(s) + 1, 1);
	if (!ptr_substring)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
		return (ptr_substring);
	while (s[start + i] && len)
	{
		ptr_substring[i] = s[start + i];
		i++;
		len--;
	}
	return (ptr_substring);
}
