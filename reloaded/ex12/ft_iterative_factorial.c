/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 10:21:54 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/09 11:24:25 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb <= 0)
	{
		return (0);
	}
	factorial = 1;
	while (nb > 1)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}

/*
int	main(void)
{
	printf("factorial 5 = %d",ft_iterative_factorial(5));
	return(0);
}
*/
