/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 08:57:19 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/23 09:42:15 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *current;
	t_list *last;
	int i;

	i = 0;
	last = 0;
	while (++i < ac)
	{
		current = ft_create_elem(av[i]);
		current->next = last;
		last = current;
	}
	return (current);
}

t_list	*ft_create_elem(void *data)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return (list);
}

int main(int argc, char **argv) {
	t_list *node1;
	t_list *node2;

	node1 = ft_list_push_params(argc, argv);
	node2 = ft_create_elem("q");
	ft_list_merge(&node1, node2);
	while (argc > 1 && node1)
	{
		printf("%s\n", node1->data);
		node1 = node1->next;
	}
	return 0;
}
