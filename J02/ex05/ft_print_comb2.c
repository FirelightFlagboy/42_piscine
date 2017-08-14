/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 18:15:51 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/03 10:58:38 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void);

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		i;
	int		h;
	int		b;

	i = 0;
	while (i < 10000)
	{
		h = i / 100;
		b = i % 100;
		if ((b > h))
		{
			ft_putchar((h / 10 + '0'));
			ft_putchar((h % 10 + '0'));
			ft_putchar(' ');
			ft_putchar((b / 10 + '0'));
			ft_putchar((b % 10 + '0'));
			if (i < 9899)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}
