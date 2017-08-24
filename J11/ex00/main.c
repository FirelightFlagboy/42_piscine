/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 21:30:46 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/20 21:35:51 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int main(void) {
	t_list *head;

	head = ft_create_elem("qwe");
	head->next = ft_create_elem("rty");
	head->next->next = ft_create_elem("uio");
	while (head)
	{
		printf("%s", head->data);
		head = head->next;
	}
	return 0;
}
