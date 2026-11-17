/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:42:28 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/16 15:19:19 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_res_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (ft_strchr(set, s1[start]))
		++start;
	return (start);
}

static int	get_res_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_strchr(set, s1[end]))
		--end;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		res_len;

	if (!s1)
		return (NULL);
	start = get_res_start(s1, set);
	end = get_res_end(s1, set);
	if (end < start)
		return (ft_calloc(1, 1));
	res_len = end - start + 1;
	res = ft_substr(s1, start, res_len);
	return (res);
}
