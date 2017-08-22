/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 08:32:58 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/16 21:57:46 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		i;
	int		*array;

	i = -1;
	array = malloc(lenght * sizeof(int));
	while (++i < lenght)
	{
		array[i] = (*f)(tab[i]);
	}
	return (array);
}
