/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:33:37 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 16:30:16 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *current;

	current = *begin_list1;
	if (!current)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (current->next)
		current = current->next;
	current->next = begin_list2;
}
