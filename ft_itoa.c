/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:29:59 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/15 11:27:47 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int (len) = 0;
	long (nb) = n;
	if (!nb)
		return (2);
	if (nb < 0)
	{
		++len;
		nb = -nb;
	}
	while (nb)
	{
		nb /= 10;
		++len;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	int (start) = 0;
	int (len) = get_len(n);
	long (nb) = n;
	char *(res) = malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	res[--len] = 0;
	if (nb < 0)
	{
		res[start++] = '-';
		nb = -nb;
	}
	while (len > start)
	{
		res[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (res);
}

/*int main()
{
    printf("nbr of digits: %d\n", get_len(INT_MAX));
    printf("string output: %s\n", ft_itoa(INT_MAX));
    printf("nbr of digits: %d\n", get_len(INT_MIN));
    printf("string output: %s\n", ft_itoa(INT_MIN));
    printf("nbr of digits: %d\n", get_len(0));
    printf("string output: %s\n", ft_itoa(0));
}*/
