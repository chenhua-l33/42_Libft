/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:28:08 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/15 20:13:14 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (!*lst)
		return ;
	t_list *(cursor) = *lst;
	t_list *(cur_next) = cursor;
	while (cursor)
	{
		cur_next = cursor->next;
		ft_lstdelone(cursor, del);
		cursor = cur_next;
	}
	*lst = NULL;
}
