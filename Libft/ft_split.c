#include "libft.h"
static size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	words;

	if ( !s || s[0] == '\0')
		return 0;
	words = 0;
	i = 0;
	if (s[0] != c)
	{
		i++;
		words++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i+1])
			words++;
		i++;
	}
	return	(words);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**split;
	if(!s)
		return (NULL);
	words = countwords(s,c);
	split = malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (NULL);
}