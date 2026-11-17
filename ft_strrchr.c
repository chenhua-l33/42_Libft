/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:59:57 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/17 16:22:26 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	char (c_trans) = (char) c;
	i = (int) ft_strlen(s);
	while (i >= 0)
	{
		if (c_trans == s[i])
			return ((char *)s + i);
		--i;
	}
	return (NULL);
}
