/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 21:49:37 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/18 22:23:43 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		*ft_map(int *tab, int lenght, int (*f)(int));

int		ft_find_next_prime(int nb)
{
	int i;
	int j;

	i = nb;
	while (1)
	{
		j = 2;
		while (j < i)
		{
			if (i % j == 0)
				break ;
			j++;
		}
		if (i == j)
			return (i);
		i++;
	}
}

int main(void)
{
	int		tab[] = {123, 4567, 89, 456, 123, 484, 167, 64, 798, 47, 65, 748, 757, 9843, 756};
	int		*t;
	int		(*f)(int);
	int		i;
	int 	lenght;

	lenght = 15;
	f = ft_find_next_prime;
	t = ft_map(tab, lenght, (*f));
	i = -1;
	while (++i < lenght)
		printf("%d\n", t[i]);
	return 0;
}
