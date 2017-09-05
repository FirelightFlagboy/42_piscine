/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_island.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 22:50:40 by florian           #+#    #+#             */
/*   Updated: 2017/09/05 22:08:36 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count_island.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc <= 1)
		return (0);
	while (i < argc)
	{
		ft_read_file(argv[i]);
		i++;
	}
	return (0);
}

/*
** first read the file give in param
*/

void	ft_read_file(char *filename)
{
	int i;
	int fd;
	int rt;
	char *buff;
	char *str;

	i = 10;
	fd = open(filename, O_RDONLY);
	if ((buff = malloc((i + 1) * sizeof(char))) == NULL)
		return ;
	if ((str = malloc(1 * sizeof(char))) == NULL)
		return ;
	*str = '\0';
	while ((rt = read(fd, buff, i)) > 0)
	{
		str = ft_strcat_ultimate(&str, buff);
		i *= 10;
		buff = ft_realloc(&buff, i);
	}
	if (rt == -1)
		return ;
	printf("end\n%s\n", str);
	ft_find_island(str);
}

char	*ft_strcat_ultimate(char **dest, char *src)
{
	char *d;
	char *rt;
	int sd;
	int ss;

	sd = 0;
	ss = 0;
	d = *dest;
	while (d[sd])
		sd++;
	while (src[ss])
		ss++;
	if ((rt = malloc((sd + ss + 1) * sizeof(char))) == NULL)
		return (NULL);
	ss = -1;
	sd = -1;
	while (d[++ss])
		rt[ss] = d[ss];
	while (src[++sd])
		rt[ss + sd] = src[sd];
	rt[ss + sd] = '\0';
	free (d);
	return (rt);
}

char	*ft_realloc(char **buff, int size)
{
	char *tmp;
	char *b;
	int i;

	b = *buff;
	if ((tmp = malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	free(b);
	i = -1;
	while (++i < size)
		tmp[i] = '\0';
	return (tmp);
}

/*
** after read begin work on map
*/

void	ft_find_island(char *str)
{
	if (ft_str_is_uncorrect(str))
		return ;
}

int		ft_str_is_uncorrect(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] != '.' && str[i] != 'X' && str[i] != '\n')
			return (1);
	return (0);
}
