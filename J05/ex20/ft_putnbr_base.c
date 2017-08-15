/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 15:15:40 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/13 15:15:42 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_base_valid(char *base);
int		convert_and_print(unsigned int nbr, char *base);
void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int pos_nb;

	if (!is_base_valid(base))
		return ;
	if (!nbr)
	{
		ft_putchar('0');
		return ;
	}
	if (nbr < 0)
	{
		pos_nb = -nbr;
		ft_putchar('-');
	}
	else
		pos_nb = nbr;
	convert_and_print(pos_nb, base);
}

int		convert_and_print(unsigned int nbr, char *base)
{
	int	base_size;

	base_size = 0;
	while (base[base_size] != '\0')
		base_size++;
	if (nbr >= 1)
	{
		convert_and_print(nbr / base_size, base);
		ft_putchar(base[nbr % base_size]);
	}
	return (0);
}

int		is_base_valid(char *b)
{
	int i;
	int j;

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '+' || b[i] == '-')
			return (0);
		j = i + 1;
		while (b[j] != '\0')
		{
			if (b[j] == b[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}
