/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 21:00:48 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/17 18:07:32 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	void	*content;

	t_list *(new_head) = NULL;
	t_list *(new_tail) = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			ft_lstclear(&new_head, del);
			del(content);
			return (NULL);
		}
		if (!new_head)
			new_head = node;
		else
			new_tail->next = node;
		new_tail = node;
		lst = lst->next;
	}
	return (new_head);
}
