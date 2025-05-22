/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:28:38 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/22 23:03:15 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <limits.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total;

	total = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (0);
	if (total <= INT_MAX)
		ptr = malloc(total);
	while (total)
	{
		total--;
		ptr[total] = 0;
	}
	return ((void *)ptr);
}