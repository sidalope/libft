/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:43:35 by abisiani          #+#    #+#             */
/*   Updated: 2025/05/12 17:43:53 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	str_length;

	str_length = 0;
	if (*str)
	{
		str_length += ft_strlen(++str) + 1;
	}
	return (str_length);
}