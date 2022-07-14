/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:32:53 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/13 22:38:21 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	new = ft_lstnew(f(lst->content));
	if (!new)
	{
		ft_lstclear(new, del);
		return ((void *) 0);
	}
	lst = lst->next;
	node = new->next;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(new, del);
			return ((void *) 0);
		}
		lst = lst->next;
		node = node->next;
	}
	return (new);
}
