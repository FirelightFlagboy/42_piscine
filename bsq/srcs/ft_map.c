/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:07:10 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/23 07:59:15 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map.h"

void	ft_map(char *map)
{
	char	charset[4];
	char	*mdmap;
	char	**tab;
	int		nb_nl;
	int		len_line;

	mdmap = 0;
	if (!ft_get_first_line(map, charset, &nb_nl, &mdmap))
	{
		ft_puterror("map error\n");
		return ;
	}
	len_line = ft_check_map(mdmap, charset, nb_nl);
	if (len_line == -1)
	{
		ft_puterror("map error\n");
		return ;
	}
	tab = ft_get_array_map(mdmap, nb_nl, len_line);
	ft_call_find_square(tab, nb_nl, len_line, charset);
}

int		ft_check_map(char *buff, char charset[4], int nb_nl)
{
	int	nb_line;
	int	len_line;
	int	is_space;
	int	is_obt;
	int	i;

	is_space = 0;
	nb_line = ft_get_nb_nl(buff);
	len_line = ft_strlenline(buff);
	if ((is_obt = 0) != -1 && (len_line == -1 || nb_nl != nb_line))
		return (-1);
	i = -1;
	while (buff[++i])
	{
		is_obt = (is_obt == 0 && buff[i] == charset[1]) ? 1 : is_obt;
		is_space = (is_space == 0 && buff[i] == charset[0]) ? 1 : is_space;
		if (buff[i] != charset[0] && buff[i] != charset[1] && buff[i] != '\n')
			return (-1);
	}
	if (is_space && is_obt == 0)
	{
		ft_print_empty(buff, len_line, nb_nl, charset);
		exit(EXIT_SUCCESS);
	}
	return ((is_space) ? len_line : -1);
}

char	**ft_get_array_map(char *buff, int nb_nl, int len_line)
{
	char	**map;
	int		line;
	int		row;
	int		i;

	if ((map = malloc((nb_nl + 1) * sizeof(char*))) == NULL)
		exit(EXIT_FAILURE);
	i = -1;
	while ((line = -1) != -2 && ++i <= nb_nl)
		if ((map[i] = malloc((len_line + 1) * sizeof(char))) == NULL)
			exit(EXIT_FAILURE);
	i = 0;
	while (++line <= nb_nl)
	{
		row = -1;
		while (++row < len_line)
		{
			map[line][row] = buff[i];
			i++;
		}
		map[line][row] = '\0';
		i += (buff[i] == '\n') ? 1 : 0;
	}
	map[line] = NULL;
	return (map);
}

int		ft_get_first_line(char *str, char charset[4], int *nb_line, char **map)
{
	int i;
	int j;
	int tmp;

	i = 0;
	tmp = 0;
	while (str[i] != '\n' && str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		tmp = tmp * 10 + str[i] - '0';
		i++;
	}
	*nb_line = tmp;
	j = 0;
	while (j < 3 && str[i] != '\0' && str[i] != '\n')
	{
		charset[j] = str[i];
		i++;
		j++;
	}
	charset[j] = '\0';
	*map = str + i + 1;
	if (j == 3)
		return (1);
	return (0);
}

void	ft_call_find_square(char **map, int nb_nl, int len_line, char *charset)
{
	int			tab[2];
	long long	result;

	tab[1] = nb_nl;
	tab[0] = len_line;
	result = find_square(map, charset, tab);
	map = fill_map(map, result, charset, tab);
	ft_show_map(map, len_line, nb_nl);
}
