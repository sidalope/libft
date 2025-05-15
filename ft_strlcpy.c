/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 01:29:16 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/15 01:37:03 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int	i;

	i = 0;
	(void)dst;
	(void)dstsize;
	while(src++)
	{
		i++;
	}
	return (i);
}
