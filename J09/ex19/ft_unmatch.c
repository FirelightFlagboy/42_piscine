/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:27:33 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 15:34:50 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int lenght)
{
	int i;
	int k;
	int nb_value;

	i = 0;
	while (i < lenght)
	{
		k = 0;
		nb_value = 0;
		while (k < lenght)
		{
			nb_value += (tab[i] == tab[k]) ? 1 : 0;
			k++;
		}
		if (nb_value % 3 == 0 || nb_value == 1)
			break ;
		i++;
	}
	return (tab[i]);
}
