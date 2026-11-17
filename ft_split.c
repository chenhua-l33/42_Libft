/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:57:14 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/15 12:17:02 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_splits(char const *s, char c)
{
	int (start) = 0;
	int (end) = 0;
	int (splits) = 0;
	while (s[end])
	{
		if (s[end] == c)
		{
			if (end != start)
				++splits;
			start = ++end;
		}
		else
			++end;
	}
	if (start < end)
		++splits;
	return (splits);
}

static char	**fill_splits(char **res, char const *s, char c)
{
	int (start) = 0;
	int (end) = 0;
	int (i) = 0;
	while (s[end])
	{
		if (s[end] == c)
		{
			if (end != start)
				res[i++] = ft_substr(s, start, end - start);
			start = ++end;
		}
		else
			++end;
	}
	if (start < end)
		res[i++] = ft_substr(s, start, end - start);
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	int (splits) = nbr_splits(s, c);
	res = malloc((splits + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res = fill_splits(res, s, c);
	return (res);
}

/*int main()
{
    printf("%d\n", nbr_splits("  tripouille  42  ", ' '));
}*/
