/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:03:46 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/30 10:03:48 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s1) + 1;
	pointer = malloc(size * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	while (s1[i])
	{
		pointer[i] = s1[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
