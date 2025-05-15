/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:45:26 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/31 16:57:58 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

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
	while (*src++ && size)
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
}
