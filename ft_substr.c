/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:11:47 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/15 11:58:03 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;

	unsigned int (i) = 0;
	size_t (s_len) = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (start + len > s_len)
	{
		sub = malloc((s_len - start + 1) * sizeof(char));
		if (!sub)
			return (NULL);
		while (start < s_len)
			sub[i++] = s[start++];
	}
	else
	{
		sub = malloc((len + 1) * sizeof(char));
		if (!sub)
			return (NULL);
		while (i < len)
			sub[i++] = s[start++];
	}
	sub[i] = 0;
	return (sub);
}
