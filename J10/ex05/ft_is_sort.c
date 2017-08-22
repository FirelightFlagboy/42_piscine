/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 08:42:50 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 14:09:07 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;
	int boolean;

	i = 0;
	boolean = 1;
	if (lenght <= 2)
		return (boolean);
	while (i < lenght - 2 && (*f)(tab[i], tab[i + 1]) == 0)
		i++;
	if ((*f)(tab[i], tab[i + 1]) < 0)
	{
		i = -1;
		while (++i < lenght - 1)
			boolean = ((*f)(tab[i], tab[i + 1]) <= 0) ? boolean : 0;
	}
	else if ((*f)(tab[i], tab[i + 1]) > 0)
	{
		i = -1;
		while (++i < lenght - 1)
			boolean = ((*f)(tab[i], tab[i + 1]) >= 0) ? boolean : 0;
	}
	return (boolean);
}
