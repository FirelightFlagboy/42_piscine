/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 11:08:53 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/08 14:39:40 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb);

int		ft_recursive_factorial(int nb)
{
	int is_neg;

	is_neg = 0;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	if (nb > 1)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
