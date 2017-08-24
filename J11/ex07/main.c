/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 08:09:15 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/24 10:17:41 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return (list);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*current;
	t_list	*last;
	int		i;

	i = 0;
	last = 0;
	if (av == 0 || ac == 0)
	{
		printf("NULL\n");
		return (0);
	}
	while (i < ac)
	{
		current = ft_create_elem(av[i]);
		current->next = last;
		last = current;
		i++;
	}
	return (current);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;

	current = *begin_list;
	if (current == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (current->next)
		current = current->next;
	current->next = ft_create_elem(data);
}


int main(int argc, char **argv) {
	t_list *head;
	t_list *tmp;

	head = NULL;
	ft_list_push_back(&head, "A");
	ft_list_push_back(&head, "B");
	ft_list_push_back(&head, "C");
	ft_list_push_back(&head, "D");
	ft_list_push_back(&head, "E");
	if (argc != 2)
		return (0);
	tmp = ft_list_at(head, atoi(argv[1]));
	printf("done\n");
	if (tmp != NULL)
		printf(">>%s\n", tmp->data);
	else
		printf("NULL %p\n", tmp);
	while (head)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
	return 0;
}
