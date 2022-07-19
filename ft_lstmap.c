/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:32:53 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/20 07:42:19 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst || !f)
		return (FT_NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return ((void *) 0);
	node = new;
	while (lst->next)
	{
		lst = lst->next;
		node->next = ft_lstnew(f(lst->content));
		node = node->next;
		if (!node)
		{
			ft_lstclear(&new, del);
			return ((void *) 0);
		}
	}
	return (new);
}
