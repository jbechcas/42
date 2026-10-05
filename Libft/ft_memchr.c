/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 22:11:33 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/26 22:34:25 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp_mechr;
	size_t				i;

	i = 0;
	temp_mechr = (const unsigned char *)s;
	while (i < n)
	{
		if (temp_mechr[i] == (unsigned char)c)
		{
			return ((void *)&temp_mechr[i]);
		}
		i++;
	}
	return (NULL);
}
