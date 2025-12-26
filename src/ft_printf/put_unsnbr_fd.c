/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_unsnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisani <abisani@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:05:40 by abisiani          #+#    #+#             */
/*   Updated: 2025/12/26 16:07:13 by abisani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	put_unsnbr_fd(unsigned int n, int fd)
{
	unsigned int	num;

	num = 0;
	if (n > 9)
		put_unsnbr_fd(n / 10, fd);
	num = n % 10 + '0';
	write(fd, &num, 1);
}
