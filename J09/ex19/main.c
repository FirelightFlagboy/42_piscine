/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:27:32 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 15:35:15 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_unmatch(int *tab, int lenght);

int main(void)
{
	int tab[] = {1, 1, 2, 4, 3, 4, 2, 3, 4};
	int len = 9;
	printf("impair > %d\n", ft_unmatch(tab, len));
	return 0;
}
