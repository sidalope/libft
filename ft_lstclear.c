/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:19:25 by abisiani          #+#    #+#             */
/*   Updated: 2025/06/05 13:51:29 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*next;

	node = lst;
	while (node)
	{
		if (node->next)
		{
			next = node->next;
			del(node);
			free(node);
			node = next;
		}
		else
		{
			del(node);
			free(node);
			// break ;
		}
	}
	lst = NULL;
}
