/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctriquen <ctriquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:47:48 by ctriquen          #+#    #+#             */
/*   Updated: 2017/08/23 10:20:32 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_find_square.h"

#define CHECK1 (pos / size_p[0] + size_p[2] >= size_p[1])

int			check(char **map, int pos, char *elems, int *size_p)
{
	int		counter1;
	int		counter2;

	if (map[pos / size_p[0]][pos % size_p[0]] != elems[0])
		return (0);
	else if (CHECK1 || pos % size_p[0] + size_p[2] >= size_p[0])
		return (0);
	else
	{
		counter1 = pos / size_p[0] - 1;
		counter2 = pos % size_p[0] + size_p[2];
		while (++counter1 < pos / size_p[0] + size_p[2])
		{
			if (map[counter1][counter2] != elems[0])
				return (0);
		}
		while (counter2 >= pos % size_p[0])
		{
			if (map[counter1][counter2] != elems[0])
				return (0);
			counter2--;
		}
		return (1);
	}
}

int			check_rec(char **map, int pos, char *elems, int *size)
{
	int		counter;
	int		*size_p;

	if ((size_p = (int *)malloc(sizeof(int) * 3)) == NULL)
		exit(EXIT_FAILURE);
	size_p[0] = size[0];
	size_p[1] = size[1];
	counter = 0;
	size_p[2] = 0;
	while (check(map, pos, elems, size_p))
		size_p[2] = ++counter;
	counter--;
	return (counter);
}

long long	find_square(char **map, char *elems, int *size)
{
	int			counter1;
	int			counter2;
	int			temp;
	int			max;
	long long	result;

	counter1 = -1;
	max = -1;
	result = -1;
	while (++counter1 < size[1])
	{
		counter2 = -1;
		while (++counter2 < size[0])
		{
			temp = check_rec(map, counter1 * size[0] + counter2, elems, size);
			if (temp > max)
			{
				max = temp;
				result = counter1 * size[0] + counter2;
			}
		}
	}
	return (result * 100 + max);
}

char		**fill_map(char **map, int result, char *elems, int *size)
{
	int		counter1;
	int		counter2;
	int		p;
	int		max_l;
	int		max_c;

	p = result % 100;
	result /= 100;
	counter1 = result / size[0];
	max_l = result / size[0] + p;
	max_c = result % size[0] + p;
	while (counter1 <= max_l)
	{
		counter2 = result % size[0];
		while (counter2 <= max_c)
		{
			map[counter1][counter2] = elems[2];
			counter2++;
		}
		counter1++;
	}
	return (map);
}
