/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 09:05:01 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/20 11:44:48 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int));

int		ft_cmp(int i, int p)
{
	return (i - p);
}

int		main(void)
{
	int tabm[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 16192, 32384};
	int		(*f)(int, int);
	f = ft_cmp;
	printf("%d\n", ft_is_sort(tabm, 15, (*f)));
	return 0;
}
