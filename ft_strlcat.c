/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:45:26 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/15 15:33:12 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{

	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (!size && !dst)
		return (src_len);
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && (dst_len + i) < (size -1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);


	// char		*d;
	// const char	*s;
	// (void)size;
	// d = dst;
	// s = src;
	// d += ft_strlen(d);
	// if (size >= ft_strlen(d) + ft_strlen(s) + 1)
	// {
	// 	while (*s)
	// 	{
	// 		*d++ = *s++;
	// 		// printf("%c ", *d);
	// 	}
	// 	*d = '\0';
	// }
	// return (ft_strlen(d) + ft_strlen(s));

	// while (size-- && s[i])
	// {
	// 	d[i] = s[i];
	// 	i++;
	// }
	// i = 0;
	// while (s[i])
	// {
	// 	i++;
	// }
	// return (i);

	// unsigned int	len;
	// int				src_len;
	// int				dest_len;

	// len = 0;
	// src_len = 0;
	// while (dest[len])
	// 	len++;
	// dest_len = len;
	// while (src[src_len])
	// 	src_len++;
	// if (size <= len)
	// 	return (dest_len + src_len);
	// size = size - 1 - len;
	// while (*src && size)
	// {
	// 	dest[len] = *src;
	// 	len++;
	// 	src++;
	// 	size--;
	// 	if (! *src)
	// 		break ;
	// }
	// dest[len] = '\0';
	// return (len);
}
