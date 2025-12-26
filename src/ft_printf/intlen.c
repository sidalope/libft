/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisani <abisani@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:30:02 by abisiani          #+#    #+#             */
/*   Updated: 2025/12/26 16:26:56 by abisani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	intlen(int n)
{
	int	count;

	count = 0;
	if (n < 0 || n == 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	uintlen(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}
