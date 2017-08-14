/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 22:30:39 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/06 15:06:42 by tseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_make_roof(int x, int y);

void		ft_make_floor(int x, int y);

void		ft_make_ceiling(int x, int y);

void		rush(int x, int y)
{
	ft_make_roof(x, y);
	ft_make_ceiling(x, y);
	ft_make_floor(x, y);
}

void		ft_make_roof(int x, int y)
{
	int i;

	i = 0;
	if (y > 0)
	{
		if (x > 0)
			ft_putchar('A');
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1)
			ft_putchar('A');
		ft_putchar('\n');
	}
}

void		ft_make_floor(int x, int y)
{
	int i;

	i = 0;
	if (y > 1)
	{
		if (x > 0)
			ft_putchar('C');
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1)
			ft_putchar('C');
		ft_putchar('\n');
	}
}

void		ft_make_ceiling(int x, int y)
{
	int ix;
	int iy;

	if (y > 2)
	{
		iy = 0;
		while (iy < y - 2)
		{
			ix = 0;
			if (x > 0)
				ft_putchar('B');
			while (ix < x - 2)
			{
				ft_putchar(' ');
				ix++;
			}
			if (x > 1)
				ft_putchar('B');
			ft_putchar('\n');
			iy++;
		}
	}
}
