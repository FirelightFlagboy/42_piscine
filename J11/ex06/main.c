/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 08:05:42 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/21 08:07:55 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list);

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
	ft_list_clear(&head);
	if (head == NULL)
		printf("DESTROY\n");
	else
		printf("nana\n");
	if (head->next == NULL)
		printf("DESTROY\n");
	return 0;
}
