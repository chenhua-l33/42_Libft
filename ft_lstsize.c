/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:55:37 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/15 18:19:17 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list *(cursor) = lst;
	unsigned int (cnt) = 0;
	while (cursor)
	{
		cursor = cursor->next;
		++cnt;
	}
	return (cnt);
}
