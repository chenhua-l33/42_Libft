/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:47:58 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/17 16:20:48 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	char (c_cmp) = (char) c;
	i = 0;
	while (s[i])
	{
		if (c_cmp == s[i])
			return ((char *)s + i);
		++i;
	}
	if (c_cmp == s[i])
		return ((char *)s + i);
	return (NULL);
}
