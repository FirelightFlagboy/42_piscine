/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 14:57:24 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/07 08:55:15 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	double x;
	double y;

	y = 1;
	x = nb;
	if (x < 0)
		return (0);
	else
		while ((int)(y * 100) != (int)(x * 100 / y))
		{
			y = (y + x / y) / 2;
		}
	if (y == (int)y)
		return (y);
	else
		return (0);
}
