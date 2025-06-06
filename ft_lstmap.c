/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abisiani <abisiani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:58:15 by abisiani          #+#    #+#             */
/*   Updated: 2025/06/06 13:26:32 by abisiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_llist;
	t_list	*new_node;

	if (!lst)
		return (NULL);
	new_llist = ft_lstnew(f(lst->content));
	if (!new_llist)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_llist, del);
			ft_lstdelone(new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&new_llist, new_node);
		lst = lst->next;
	}
	return (new_llist);
}
