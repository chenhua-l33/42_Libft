/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:21:55 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/17 16:31:06 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t (i) = 0;
	size_t (j) = 0;
	char *(big_mut) = (char *) big;
	if (!(*little))
		return (big_mut);
	while (big_mut[i] && i < len)
	{
		j = 0;
		while (big_mut[i + j] == little[j] && little[j] && i + j < len)
			++j;
		if (!little[j])
			return (big_mut + i);
		++i;
	}
	return (NULL);
}
