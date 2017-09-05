/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_island.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 22:50:40 by florian           #+#    #+#             */
/*   Updated: 2017/08/30 23:31:16 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count_island.h"

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc <= 1)
		return (0);
	while (i < argc)
	{
		ft_read_file(argv[i]);
		i++;
	}
	return (0);
}

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
	while ((rt = read(fd, buff, i)) >= 0)
	{
		str = ft_strcat_ultimate(&str, buff);
		i *= 10;
		buff = ft_realloc(&buff, i);
	}
	if (rt == -1)
		return ;
}

char	*ft_strcat_ultimate(char **dest, char *src)
{
	char *d;
	char *rt;
	int sd;
	int ss;

	sd = 0;
	d = *dest;
	while (d[sd])
		sd++;
	ss = 0;
	while (src[ss])
		ss++;
	if ((rt = malloc((sd + ss + 1) * sizeof(char))) == NULL)
		return (NULL);
	ss = -1;
	while (d[++ss])
		rt[]
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
