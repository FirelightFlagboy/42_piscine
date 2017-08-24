/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 09:13:45 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/21 09:49:01 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list);

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
	t_list *head;
	t_list *cpy;

	head = ft_list_push_params(argc, argv);
	cpy = head;
	while (head && argc > 1)
	{
		printf("%s\t>>%p\n", head->data, head);
		head = head->next;
	}
	ft_list_reverse_fun(cpy);
	printf("done >> %p >> %p\n", cpy, head);
	while (cpy && argc > 1)
	{
		printf("%s\n", cpy->data);
		cpy = cpy->next;
	}
	return 0;
}
