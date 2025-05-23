/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:55:28 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/23 22:53:44 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

const char	*skip_whitespace(const char *str)
{
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	int			len;
	int			minus;
	int			i;

	len = 0;
	minus = 0;
	i = 0;
	if (*str)
	{
		str = skip_whitespace(str);
		if (*str == '-')
		{
			minus = 1;
			str++;
		}
		while (str[len] >= '0' && str[len] <= '9')
		{
			i = i * 10 + str[len] - '0';
			len++;
		}
		if (minus)
			i *= -1;
	}
	return (i);
}
