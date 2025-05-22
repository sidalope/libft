/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:42:05 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/22 20:58:13 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || c < 0 || c > 255)
		return (NULL);
	while (n)
	{
		if (((unsigned char *)s)[i] == c)
			return (((unsigned char *)s) + i);
		i++;
		n--;
	}
	return (NULL);
}
