/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 10:39:50 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/08 10:39:52 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_number(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}

/* 
int	main(void)
{
	ft_print_number();
	return (0);
}
*/
