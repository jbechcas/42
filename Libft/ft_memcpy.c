/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:38:49 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/24 12:10:45 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dest_temp;
	const unsigned char		*src_temp;
	size_t					i;

	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;
	}
	return (dest);
}
