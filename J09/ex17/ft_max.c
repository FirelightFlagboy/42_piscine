/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:55:42 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 16:19:00 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int lenght)
{
	int max_value;
	int i;

	i = 0;
	max_value = tab[i];
	while (i < lenght)
	{
		if (tab[i] > max_value)
			max_value = tab[i];
		i++;
	}
	return (max_value);
}
