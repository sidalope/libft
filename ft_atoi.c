/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:55:28 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/30 20:14:28 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	skip_whitespace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '+')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		integer;
	int		len;
	int		minus;

	i = 0;
	integer = 0;
	len = 0;
	minus = 0;
	if (str[i])
	{
		i = skip_whitespace(str);
		printf("i: %i\n", i);
		if (str[i] == '-')
		{
			minus = 1;
			i++;
		}
		// if (str[i] == '+')
		// 	i++;
		while (str[len] >= '0' && str[len] <= '9')
		{
			integer = integer * 10 + str[len] - '0';
			len++;
		}
		if (minus)
			integer *= -1;
		printf("integer: %i\n\n", integer);
	}
	return (integer);
}
