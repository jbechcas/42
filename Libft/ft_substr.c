/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 12:48:43 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/10/03 11:59:30 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cutstr(char const *s, unsigned int start,
				size_t len, size_t s_len)
{
	char	*ptr;
	size_t	i;
	size_t	real_len;

	i = 0;
	if (len > s_len - start)
		real_len = s_len - start;
	else
		real_len = len;
	ptr = malloc(real_len + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[start] && i < real_len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	return (ft_cutstr(s, start, len, size));
}
