/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 08:59:33 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/23 10:03:19 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *head;
	t_list *prev;
	t_list *tmp;

	if ((prev = 0) != 0 && !begin_list)
		return ;
	head = *begin_list;
	while (head != 0)
	{
		if (cmp(head->data, data_ref) == 0)
		{
			tmp = head;
			if (prev == 0)
				*begin_list = head->next;
			else
				prev->next = head->next;
			head = head->next;
			free(tmp);
		}
		if (head)
		{
			prev = head;
			head = head->next;
		}
	}
}
