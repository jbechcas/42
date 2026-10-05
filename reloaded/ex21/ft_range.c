/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:43:03 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/15 14:44:01 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	length;
	int	i;

	if (min >= max)
		return (NULL);
	length = max - min;
	range = malloc(length * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/*
int	main(void)
{
	int *range= ft_range(10,80);
	int i = 0;
	int length = sizeof(range)/sizeof(range[0]);
	while (i < 70)
	{
		printf("%d ",range[i]);
		i++;
	}
}
*/
