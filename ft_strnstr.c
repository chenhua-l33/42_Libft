/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:21:55 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/11 20:35:39 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t (i) = 0;
	size_t (i_lil) = 0;
	char *(big_mut) = (char *) big;
	if (!(*little))
		return (big_mut);
	while (big_mut[i] && i < len)
	{
		i_lil = 0;
		if (big_mut[i] == little[i_lil])
		{
			while (little[i_lil] && i + i_lil < len)
			{
				if (little[i_lil] != big_mut[i + i_lil])
					break ;
				++i_lil;
			}
			if (!little[i_lil])
				return (big_mut + i);
		}
		++i;
	}
	return (NULL);
}
