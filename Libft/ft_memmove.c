/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:02:11 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/10/19 10:04:56 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_temp;
	const unsigned char	*src_temp;

	if (!dest && !src)
		return (NULL);
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
