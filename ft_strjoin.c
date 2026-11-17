/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:24:09 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/11 15:06:26 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	size_t (i) = 0;
	size_t (s1_len) = ft_strlen(s1);
	size_t (s2_len) = ft_strlen(s2);
	size_t (res_len) = s1_len + s2_len;
	res = malloc((res_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < s1_len)
	{
		res[i] = s1[i];
		++i;
	}
	while (i < res_len)
	{
		res[i] = s2[i - s1_len];
		++i;
	}
	res[i] = 0;
	return (res);
}
