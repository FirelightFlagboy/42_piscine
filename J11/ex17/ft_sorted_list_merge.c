/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:58:59 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 16:21:49 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_swap_data(t_list *a, t_list *b)
{
	t_list tmp;

	tmp.data = a->data;
	a->data = b->data;
	b->data = tmp.data;
}

void	ft_list_sort_123456(t_list **begin_list, int (*cmp)())
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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2
	, int (*cmp)())
{
	t_list *current;

	current = *begin_list1;
	if (current == 0)
		*begin_list1 = begin_list2;
	else
	{
		while (current->next)
			current = current->next;
		current->next = begin_list2;
	}
	ft_list_sort_123456(begin_list1, (*cmp));
}
