/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 10:32:47 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/07 11:37:05 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb);

int		ft_find_next_prime(int nb)
{
	int i;
	int j;

	i = nb;
	while (1)
	{
		j = 2;
		while (j < i)
		{
			if (i % j == 0)
				break ;
			j++;
		}
		if (i == j)
			return (i);
		i++;
	}
}
