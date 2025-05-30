/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:11:20 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/30 17:29:14 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**strings;

	strings = (char **) malloc(2 * sizeof(char *));
	(void)s;
	(void)c;
	if (strings == NULL)
		exit(1);
	return (strings);
}
