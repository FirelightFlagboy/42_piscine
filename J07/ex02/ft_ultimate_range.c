/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 12:14:35 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/18 07:58:44 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	dimen;
	unsigned int	i;
	int				*tab;

	if (min >= max)
		return (0);
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
	*range = tab;
	return (i);
}
