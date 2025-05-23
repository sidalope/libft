/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 23:11:48 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/23 22:51:06 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*new_string;

	i = 0;
	new_string = malloc(ft_strlen(s));
	while (s[i])
	{
		new_string[i] = s[i];
		i++;
	}
	new_string[i] = 0;
	return (new_string);
}
