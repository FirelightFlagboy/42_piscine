/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 10:36:00 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/23 10:14:21 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	if (*s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
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

int main(int argc, char *argv[])
{
	t_list **ptr;
	t_list *node;
	t_list *cpy;

	node = ft_list_push_params(argc, argv);
	ptr = &node;
	cpy = node;
	while (node && argc > 1)
	{
		printf(">>%s\n", node->data);
		node = node->next;
	}
	ft_sorted_list_insert(&cpy, "end", &ft_strcmp);
	printf("done\n");
	while (cpy)
	{
		printf("%s\n", cpy->data);
		cpy = cpy->next;
	}
	return 0;
}
