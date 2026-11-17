/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:28:27 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/11 20:42:45 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*ptr;

	size_t (i) = 0;
	if (!n || !size)
		return (malloc(1));
	if (n > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	while (i < n * size)
	{
		ptr[i] = 0;
		++i;
	}
	return (ptr);
}
