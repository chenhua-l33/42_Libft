/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:59:57 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/11 18:25:41 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	char *(s_mut) = (char *) s;
	char (c_trans) = (char) c;
	i = 0;
	while (s[i])
		++i;
	while (i >= 0)
	{
		if (c_trans == s_mut[i])
			return (s_mut + i);
		--i;
	}
	return (NULL);
}
