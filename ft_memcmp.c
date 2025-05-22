/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:15:01 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/22 20:36:01 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*tmp_s1;
	const unsigned char		*tmp_s2;

	tmp_s1 = s1;
	tmp_s2 = s2;
	if (!n)
		return (0);
	while ((*tmp_s1++ == *tmp_s2++) && n--)
		continue;
	return (*tmp_s1 - *tmp_s2);
}
