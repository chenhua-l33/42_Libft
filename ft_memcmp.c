/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:06:17 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/17 15:25:32 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t (i) = 0;
	unsigned char *(s1_mut) = (unsigned char *) s1;
	unsigned char *(s2_mut) = (unsigned char *) s2;
	while (i < n && s1_mut[i] == s2_mut[i])
		++i;
	if (i == n)
		return (0);
	return (s1_mut[i] - s2_mut[i]);
}
