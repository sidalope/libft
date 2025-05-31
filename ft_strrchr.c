/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:41:35 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/31 18:39:50 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if ((char) c == '\0')
		return ((char *)(s += i + 1));
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)(s += i));
		i--;
	}
	return (NULL);
}
