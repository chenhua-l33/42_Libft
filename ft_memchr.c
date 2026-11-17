/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:55:00 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/11 18:19:54 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t (i) = 0;
	unsigned char *(res) = (unsigned char *) s;
	char (c_trans) = (char) c;
	while (i < n)
	{
		if (res[i] == c_trans)
			return (res + i);
		++i;
	}
	return (NULL);
}
