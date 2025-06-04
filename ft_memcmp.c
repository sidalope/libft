/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:15:01 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/31 18:40:46 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				difference;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	difference = 0;
	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	if (!n)
		return (0);
	while (n)
	{
		difference += *tmp_s1++ - *tmp_s2++;
		n--;
	}
	return (difference);
}
