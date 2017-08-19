/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 11:47:31 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/16 15:49:06 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*tab;
	unsigned int	dimen;
	unsigned int	i;

	if (min >= max)
		return (NULL);
	dimen = max - min;
	dimen += (min < 0) ? 1 : 0;
	tab = malloc(dimen * sizeof(int));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
