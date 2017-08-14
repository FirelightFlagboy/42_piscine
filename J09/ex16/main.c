/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:51:08 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 14:52:31 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int		ft_active_bits(int value);

int main(void) {
	int nb;

	nb = 123456789;
	printf("nb bits>%u\n",ft_active_bits(nb));
	return 0;
}
