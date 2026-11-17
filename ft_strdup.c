/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:10:40 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/05 10:45:45 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*s1;

	if (!s)
		return (NULL);
	len = 0;
	i = 0;
	while (s[len])
		++len;
	s1 = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[i];
		++i;
	}
	s1[i] = 0;
	return (s1);
}
