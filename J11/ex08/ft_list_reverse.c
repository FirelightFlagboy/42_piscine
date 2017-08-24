/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:41:02 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/21 10:53:58 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_rev_list(t_list *node)
{
	t_list *rest;

	if (!node)
		return (0);
	if (!node->next)
		return (node);
	rest = ft_rev_list(node->next);
	node->next->next = node;
	node->next = 0;
	return (rest);
}

void	ft_list_reverse(t_list **begin_list)
{
	*begin_list = ft_rev_list(*begin_list);
}
