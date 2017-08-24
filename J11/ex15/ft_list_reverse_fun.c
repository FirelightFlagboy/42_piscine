/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 13:57:58 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/21 10:55:43 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		ft_list_size(t_list *begin_list)
{
	return ((begin_list) ? 1 + ft_list_size(begin_list->next) : 0);
}

void	ft_swap_data(t_list *a, t_list *b)
{
	t_list tmp;

	tmp.data = a->data;
	a->data = b->data;
	b->data = tmp.data;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		j;
	int		len;
	int		len2;
	t_list	*current;

	len = ft_list_size(begin_list);
	len2 = len;
	i = -1;
	while (++i < len)
	{
		current = begin_list;
		j = 0;
		while (++j < len2)
		{
			if (current->next->data)
				ft_swap_data(current, current->next);
			current = current->next;
		}
		len2--;
	}
}
