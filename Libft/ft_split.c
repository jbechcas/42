/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirut <kirut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 10:20:55 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/10/07 10:36:40 by kirut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static void	*free_all(char **split, size_t i)
{
	while (i > 0)
	{
		i--;
		free(split[i]);
	}
	free(split);
	return (NULL);
}

static char	**fill_split(char **split, char const *s, char c, size_t words)
{
	size_t	start;
	size_t	i;
	size_t	len;

	i = 0;
	start = 0;
	while (i < words)
	{
		while (s[start] && s[start] == c)
			start++;
		len = 0;
		while (s[start + len] && s[start + len] != c)
			len++;
		split[i] = ft_substr(s, start, len);
		if (!split[i])
			return (free_all(split, i));
		start += len;
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**split;

	if (!s)
		return (NULL);
	words = countwords(s, c);
	split = malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (fill_split(split, s, c, words));
}
