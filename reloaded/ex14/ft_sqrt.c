/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 08:43:24 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/10 13:07:14 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	count;
	
	count = 1;
	while (count < nb)
	{
		if(count*count == nb)
		{
			return count;
		}
		count++;
	}
	return 0;
}

int	main(void)
{
	printf("%d",ft_sqrt(2));
	return (0);
}
