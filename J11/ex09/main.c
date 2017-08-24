/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 08:28:07 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/21 08:31:23 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_putstr(void *str)
{
	char *src;

	src = str;
	while (*src)
		write(1, src++, 1);
}

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

	head = ft_list_push_params(argc, argv);
	ft_list_foreach(head, &ft_putstr);
	return 0;
}
