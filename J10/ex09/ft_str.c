/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 07:59:25 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/17 17:20:46 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(long long nb)
{
	int				tab[20];
	unsigned int	temp;

	temp = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	if (nb < 0)
	{
		ft_putchar('-');
		temp = nb * -1;
		if (nb <= -10)
		{
			ft_putnbr(temp / 10);
			return (ft_putnbr(temp % 10));
		}
		return (ft_putchar(temp + '0'));
	}
	while (nb > 0 && temp < 15)
	{
		tab[temp] = nb % 10;
		nb /= 10;
		temp++;
	}
	while (temp-- > 0)
		ft_putchar(tab[temp] + '0');
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
