/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:47:58 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/11 16:45:59 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	char *(s_mut) = (char *) s;
	char (c_cmp) = (char) c;
	i = 0;
	while (s[i])
	{
		if (c_cmp == s_mut[i])
			return (s_mut + i);
		++i;
	}
	if (c_cmp == s_mut[i])
		return (s_mut + i);
	return (NULL);
}
