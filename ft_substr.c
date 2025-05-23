/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:08:42 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/23 13:38:06 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr_substring;

	i = 0;
	ptr_substring = malloc(len);	
	if (!ptr_substring)
		return (NULL);
	while(s[start + i] && len)
	{
		ptr_substring[i] = s[start + i];
		i++;
		len--;
	}
	return (ptr_substring);
}
