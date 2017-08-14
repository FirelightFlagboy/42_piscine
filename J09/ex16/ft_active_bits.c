/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:48:17 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 14:51:06 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_active_bits(int value)
{
	unsigned int nb_bits;

	nb_bits = 0;
	while (value > 0)
	{
		nb_bits += (value % 2 == 1) ? 1 : 0;
		value /= 2;
	}
	return (nb_bits);
}
