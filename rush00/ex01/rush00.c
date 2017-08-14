/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:12:48 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/06 22:12:57 by fbenneto         ###   ########.fr       */
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
			ft_putchar('o');
		while (i < x - 2)
		{
			ft_putchar('-');
			i++;
		}
		if (x > 1)
			ft_putchar('o');
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
			ft_putchar('o');
		while (i < x - 2)
		{
			ft_putchar('-');
			i++;
		}
		if (x > 1)
			ft_putchar('o');
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
				ft_putchar('|');
			while (ix < x - 2)
			{
				ft_putchar(' ');
				ix++;
			}
			if (x > 1)
				ft_putchar('|');
			ft_putchar('\n');
			iy++;
		}
	}
}
