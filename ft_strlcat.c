/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:08:26 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/16 15:30:52 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t (dst_len) = ft_strlen(dst);
	size_t (src_len) = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	size_t (i) = 0;
	while (i < size - dst_len - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		++i;
	}
	dst[dst_len + i] = 0;
	return (src_len + dst_len);
}
