/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:44:46 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/19 15:26:40 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1 && *s2 && (*s1 == *s2) && n - 1)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1 < *s2)
		return (-1);
	else if (*s1 > *s2)
		return (1);
	return (0);
}
