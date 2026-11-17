/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:29:30 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/11 10:41:38 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_buf;
	unsigned char	*src_buf;

	dest_buf = (unsigned char *) dest;
	src_buf = (unsigned char *) src;
	size_t (i) = 0;
	while (i < n)
	{
		dest_buf[i] = src_buf[i];
		++i;
	}
	return (dest);
}
