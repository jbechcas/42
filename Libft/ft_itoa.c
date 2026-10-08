/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:44:35 by kirut             #+#    #+#             */
/*   Updated: 2026/10/07 18:13:40 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int		i;
	long	nb;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i = 1;
	}
	if (nb == 0)
		i = 1;
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i + 1);
}

static char	*fill_str(long nb, char *str, int *i)
{
	if (nb < 0 && *i == 0)
	{
		str[0] = '-';
		nb = -nb;
		(*i)++;
	}
	if (nb >= 10)
		fill_str(nb / 10, str, i);
	str[*i] = '0' + (nb % 10);
	(*i)++;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(count_digits(n));
	if (!str)
		return (NULL);
	fill_str(n, str, &i);
	str[i] = '\0';
	return (str);
}
