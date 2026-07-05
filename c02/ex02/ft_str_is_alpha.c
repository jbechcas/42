/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 15:32:39 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/06/24 16:12:22 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	str_alpha;
	int	i;

	if (*str)
	{
		i = 0;
		str_alpha = 1;
		while (str[i])
		{
			if (!((str[i] >= 65 && str[i] <= 90)
					|| (str[i] >= 97 && str[i] <= 122)))
				str_alpha = 0;
			i++;
		}
		return (str_alpha);
	}
	else
	{
		return (1);
	}
}
