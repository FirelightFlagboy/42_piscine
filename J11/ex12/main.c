/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 08:39:44 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/23 10:13:11 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	return ((begin_list) ? 1 + ft_list_size(begin_list->next) : 0);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

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

	head = ft_create_elem("a");
	head->next = ft_create_elem("b");
	head->next->next = ft_create_elem("c");

	ft_list_remove_if(&head, "c", &ft_strcmp);
	printf("done\n");
	while (head)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
	return 0;
}
