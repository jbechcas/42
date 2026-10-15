/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbech-ca <jbech-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:59:06 by jbech-ca          #+#    #+#             */
/*   Updated: 2026/10/14 18:23:20 by jbech-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t_last;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		t_last = ft_lstlast(*lst);
		t_last->next = new;
	}
}
