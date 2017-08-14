/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 08:31:26 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/06 22:27:37 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	long nbr;
	long i;
	long is_neg;

	nbr = nb;
	i = nbr - 1;
	is_neg = 0;
	if (nbr > 12)
		return (0);
	if (nbr < 0)
		return (0);
	if (nbr == 0)
		return (1);
	while (i > 0)
	{
		nbr *= i;
		i--;
	}
	return (nbr);
}
