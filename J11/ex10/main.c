/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 08:33:09 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/21 08:35:58 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *)
, void *data_ref, int (*cmp)());

void	ft_putstr(void *str)
{
	char *src;

	src = str;
	while (*src)
		write(1, src++, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (0);
	if (*s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	if (*s1 != *s2)
		return (*s1 - *s2);
	return(0);
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
	ft_list_foreach_if(head, &ft_putstr, "je", &ft_strcmp);
	return 0;
}
