/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 11:18:27 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/07/05 11:18:29 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		bool;
	char	*temp;

	bool = 1;
	temp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		if (*str >= 'a' && *str <= 'z' && bool)
			*str = *str - 32;
		if (*str >= '0' && *str <= '9')
			bool = 0;
		else if (*str >= 'a' && *str <= 'z')
			bool = 0;
		else if (*str >= 'A' && *str <= 'Z')
			bool = 0;
		else
			bool = 1;
		str++;
	}
	return (temp);
}

/*
int	main(void)
{
	char	str[] = "salut, COMMENT tu+Vas ? 42mots";
	char	*result = ft_strcapitalize(str);
	write (1, result, 30);
	return (0);
}
*/
