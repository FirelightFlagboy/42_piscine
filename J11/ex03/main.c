/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 22:01:26 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/20 22:03:21 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list);

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

t_list	*ft_create_elem(void *data)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return (list);
}

int main(void) {
	t_list *head;
	t_list **ptr;

	head = NULL;
	ptr = &head;
	ft_list_push_back(&head, "A");
	ft_list_push_back(&head, "B");
	ft_list_push_back(&head, "C");
	ft_list_push_back(&head, "D");
	ft_list_push_back(&head, "E");
	printf("%d\n", ft_list_size(*ptr));
	while (head)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
	return 0;
}
