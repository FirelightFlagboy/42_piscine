/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 08:01:59 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/06 18:22:41 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putchar(char c);

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
