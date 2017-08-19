/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 20:43:03 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/18 07:59:25 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int *result;
	int min = -8;
	int max = 17;
	int lenght;
	int i;

	i = -1;
	result = NULL;
	printf("BEGIN\n");
	lenght = ft_ultimate_range(&result, min, max);
	printf("END\n");
	printf("%d\ntab: [", lenght);
	while (++i < lenght)
		printf("%d, ", result[i]);
	printf("]\n");
	return (0);
}
