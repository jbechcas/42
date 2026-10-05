/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 12:01:57 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/15 12:13:02 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copia;
	int		len;
	int		i;

	i = 0;
	len = ft_len(src);
	copia = malloc((len + 1) * sizeof(char));
	while (src[i])
	{
		copia[i] = src[i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}

/*
int		main(void)
{
	printf("%s",ft_strdup("Hola como estamos"));	
	return (0);
}
*/
