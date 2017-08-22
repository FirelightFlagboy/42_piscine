/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 21:49:37 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/17 08:22:41 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_foreach(int *tab, int lenght, void (*f)(int));

void ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int				tab[10];
	int				size;
	unsigned int	temp;

	size = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	if (nb < 0)
	{
		ft_putchar('-');
		temp = nb * -1;
		ft_putnbr(temp / 10);
		return (ft_putnbr(temp % 10));
	}
	while (nb > 0)
	{
		tab[size] = nb % 10;
		nb /= 10;
		size++;
	}
	while (size > 0)
	{
		size--;
		ft_putchar(tab[size] + '0');
	}
	ft_putchar('\n');
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int		tab[] = {123, 4567, 89, 456, 123, 484, 167, 64, 798, 47, 65, 748, 757, 9843, 756};
	void	(*f)(int);

	f = ft_putnbr;
	ft_foreach(tab, 15, (*f));
	return 0;
}
