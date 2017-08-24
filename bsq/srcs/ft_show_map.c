/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 09:16:36 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 14:37:58 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_show_map.h"
#include <unistd.h>

void	ft_show_map(char **map, int len_line, int nb_nl)
{
	int		line;
	int		row;
	char	*str;

	line = 0;
	while (line < nb_nl)
	{
		row = -1;
		str = map[line];
		write(1, str, len_line);
		ft_putchar('\n');
		line++;
	}
}

void	ft_print_empty(char *map, int len_line, int nb_nl, char *charset)
{
	int	line;
	int	i;

	line = 0;
	i = -1;
	while (map[++i])
		if (map[i] == charset[0])
			map[i] = charset[2];
	while (line < nb_nl * len_line)
	{
		write(1, map + line, len_line - 1);
		line += len_line;
	}
}
