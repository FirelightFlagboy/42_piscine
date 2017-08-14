/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 14:33:39 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/04 10:26:37 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void);

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int		i;
	char	c;
	char	d;
	char	u;

	i = 0;
	while (i < 999)
	{
		c = (i / 100) + '0';
		d = ((i % 100) / 10) + '0';
		u = (i % 10) + '0';
		i++;
		if ((u > d) && (d > c) && (c != d) && (c != u) && (d != u))
		{
			ft_putchar(c);
			ft_putchar(d);
			ft_putchar(u);
			if (i < 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
