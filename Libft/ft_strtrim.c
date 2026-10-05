/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:11:13 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/10/03 16:11:47 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]) && end > start)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
