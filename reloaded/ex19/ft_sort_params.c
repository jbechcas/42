/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:24:42 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/09/14 16:25:01 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	if (argc < 2)
	{
		return (0);
	}
	while (argv[i] && argv[i + 1])
	{
		if (argv[i][0] > argv[i + 1][0])
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
		{
			i++;
		}
	}
	print(argc, argv);
	return (0);
}
