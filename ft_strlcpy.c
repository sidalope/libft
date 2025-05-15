/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 01:29:16 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/15 13:33:11 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int			i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	while (size-- && s[i])
	{
		d[i] = s[i];
		i++;
	}
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
