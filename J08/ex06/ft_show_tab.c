/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 18:45:00 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/15 11:46:51 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j] != 0)
		{
			ft_putstr(par[i].tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}

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
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
