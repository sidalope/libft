/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:18:56 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/26 12:32:03 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	ii;
	char	*new_string;

	i = 0;
	ii = 0;
	new_string = malloc(ft_strlen(s1));
	while (s1[i])
	{
		while (set[ii])
		{
			if (set[ii] == s1[i])
			{
				ii = 0;
				break ;	
			}
			ii++;			
		}
		
		i++;
	}
	
}
