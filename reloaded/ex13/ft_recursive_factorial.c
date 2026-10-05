/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:26:50 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/10 08:33:59 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if(nb < 0)
	{
		return (0);
	}
	if(nb == 1)
	{
		return (1);
	}
	if(nb > 1)
	{
		return ft_recursive_factorial(nb - 1) * nb;
	}
}

/*
int	main(void)
{
	printf("%d",ft_recursive_factorial(2));
	return (0);
}
*/
