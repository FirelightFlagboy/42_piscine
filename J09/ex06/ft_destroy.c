/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:50:13 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 09:00:19 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	while (factory[i] != 0)
	{
		j = 0;
		while (factory[i][j] != 0)
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
}
