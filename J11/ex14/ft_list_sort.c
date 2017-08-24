/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:39:54 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 16:27:10 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_data(t_list *a, t_list *b)
{
	t_list tmp;

	tmp.data = a->data;
	a->data = b->data;
	b->data = tmp.data;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *current;
	t_list *next;

	current = *begin_list;
	if (!current)
		return ;
	if (!current->data)
		return ;
	while (current->next)
	{
		next = current->next;
		if ((*cmp)(current->data, next->data) > 0)
		{
			ft_swap_data(current, next);
			current = *begin_list;
		}
		else
			current = next;
	}
}
