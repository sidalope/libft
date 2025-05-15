/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:45:26 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/13 12:55:41 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	int				src_len;
	int				dest_len;

	len = 0;
	src_len = 0;
	while (dest[len])
		len++;
	dest_len = len;
	while (src[src_len])
		src_len++;
	if (size <= len)
		return (dest_len + src_len);
	size = size - 1 - len;
	while (*src && size)
	{
		dest[len] = *src;
		len++;
		src++;
		size--;
		if (! *src)
			break ;
	}
	dest[len] = '\0';
	return (len);
}
