/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:02:11 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/24 14:05:09 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_temp;
	const unsigned char	*src_temp;

	if (dest <= src)
	{
		return (ft_memcpy(dest, src, n));
	}
	dest_temp = (unsigned char *)dest;
	src_temp = (const unsigned char *)src;
	while (n > 0)
	{
		n--;
		dest_temp[n] = src_temp[n];
	}
	return (dest);
}
