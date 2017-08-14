/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:50:14 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 07:59:08 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base);

int		main(void)
{
	printf("31>%d\n", ft_collatz_conjecture(31));
	printf("14>%d\n", ft_collatz_conjecture(14));
	return (0);
}
