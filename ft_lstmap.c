/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:58:15 by abisiani          #+#    #+#             */
/*   Updated: 2025/06/05 15:24:20 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_llist;

	new_llist = (t_list *) malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		f(lst->content);
		lst = lst->next;
	}
	f(lst->content);
	return (new_llist);
}
