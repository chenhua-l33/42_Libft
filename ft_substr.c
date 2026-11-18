/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:11:47 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/18 09:40:29 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	fin_len;

	unsigned int (i) = 0;
	size_t (s_len) = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (start + len > s_len)
		fin_len = s_len - start;
	else
		fin_len = len;
	sub = malloc((fin_len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < fin_len)
		sub[i++] = s[start++];
	sub[i] = 0;
	return (sub);
}
