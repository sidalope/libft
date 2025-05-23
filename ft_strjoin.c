/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:51:24 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/23 22:47:56 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"

#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	total_len;
	char	*new_str;

	i = 0;
	(void)i;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	if (total_len <= INT_MAX)
	{
		new_str = malloc(total_len);
		if (!new_str)
			return(NULL);
	}
	while (*s1)
		new_str[i++] = (char)*s1++;	
	while (*s2)
		new_str[i++] = (char)*s2++;
	return (new_str);
}
