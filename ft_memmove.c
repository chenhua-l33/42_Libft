/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:46:14 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/11 10:45:52 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	unsigned char *(dest_buf) = (unsigned char *) dest;
	unsigned char *(src_buf) = (unsigned char *) src;
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (i < (int) n)
		{
			dest_buf[i] = src_buf[i];
			++i;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			dest_buf[i] = src_buf[i];
			--i;
		}
	}
	return (dest);
}
