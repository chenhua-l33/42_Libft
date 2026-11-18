/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:28:08 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/17 18:39:15 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur_next;

	if (!lst)
		return ;
	if (!*lst)
		return ;
	t_list *(cursor) = *lst;
	while (cursor)
	{
		cur_next = cursor->next;
		ft_lstdelone(cursor, del);
		cursor = cur_next;
	}
	*lst = NULL;
}
