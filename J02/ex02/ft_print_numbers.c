/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 12:16:03 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/03 10:57:55 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void);

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 0;
	c = '0';
	while (i <= 9)
	{
		ft_putchar(c);
		i++;
		c = i + '0';
	}
}
