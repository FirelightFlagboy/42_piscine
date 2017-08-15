/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:46:23 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/13 17:45:27 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

void	ft_show_non_printable(int i);

void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		p;

	i = 0;
	p = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ')
			ft_show_non_printable(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_non_printable(int i)
{
	int high;
	int low;

	high = i / 16;
	low = i % 16;
	ft_putchar(92);
	ft_putchar(high + '0');
	if (low >= 0 && low <= 9)
		ft_putchar(low + '0');
	else
		ft_putchar(low - 10 + 'a');
}
