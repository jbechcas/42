/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 19:05:22 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/26 19:56:21 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	int		isfind;
	char	*charfind;	

	isfind = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			charfind = (char *)&str[i];
			isfind = 1;
		}
		i++;
	}
	if (str[i] == (char)c)
	{
		charfind = (char *)&str[i];
		isfind = 1;
	}
	if (isfind)
		return (charfind);
	else
		return (NULL);
}
