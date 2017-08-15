/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:17:15 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/10 16:27:13 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	ft_putnbr_base(int nbr, char *base);

int main(void) {
	/*srand(time(NULL));
	int nb = 0;
	nb = rand();
	char base[] = "0123456789";
	printf("nb>\n%d\n", nb);
	printf("");
	ft_putnbr_base(nb, base);
	return 0;*/
	int nb = 0;
	char base[] = "a1";
	ft_putnbr_base(nb, base);
	return 0;
}
/*
-10000000000000000000000000000000
-10000000000000000000000000000000
*/
