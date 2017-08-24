/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:23:22 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 15:21:20 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*current;
	t_list	*last;
	int		i;

	i = 0;
	last = 0;
	if (av == 0 || ac == 0)
		return (0);
	while (i < ac)
	{
		current = ft_create_elem(av[i]);
		current->next = last;
		last = current;
		i++;
	}
	return (current);
}
