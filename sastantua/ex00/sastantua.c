/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 18:50:45 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/05 19:14:11 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		sastantua(int size);

void		ft_putchar(char c);

void		ft_make_roof(int size);

void		ft_make_floor(int size, int width);

void		sastantua(int size)
{
	if (size > 0)
	{
		if (size > 1)
			ft_make_roof(size);
		else
			ft_make_floor(size, 1);
	}
}

void		ft_make_roof(int size)
{
}

void		ft_make_floor(int size, int width)
{
	int h;
	int l;

	h = 0;
	while (h < size + 2)
	{
		l = 0;
		ft_putchar('/');
		while (l < width)
		{
			ft_putchar('*');
			l++;
		}
		width += 2;
		h++;
	}
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(void)
{
	sastantua(1);
}
