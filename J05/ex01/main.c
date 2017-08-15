/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 15:20:52 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/13 15:26:44 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int main(int argc, char const *argv[]) {
	int i;
	long nb;

	i = 1;
	while (i < argc)
	{
		nb = atoi(argv[i]);
		printf("%lu\n", nb);
		ft_putnbr(nb);
		ft_putchar('\n');
		i++;
	}
	return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
