/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 10:03:15 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/09 10:18:22 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	div, mod, *p_div, *p_mod, a, b;

	div = 0;
	mod = 0;
	p_div = &div;
	p_mod = &mod;
	a = 5;
	b = 2;
	ft_div_mod(a,b,p_div,p_mod);
	printf("div = %d mod = %d",*p_div, *p_mod);
}
*/
