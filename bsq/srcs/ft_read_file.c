/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:26:40 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 22:14:17 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_file.h"

void	ft_read_file(char *filename)
{
	int		fd;
	int		len;
	char	*result;

	fd = open(filename, O_RDONLY);
	len = 0;
	if (fd == -1)
	{
		ft_putstr("Error: file does not existe.\n");
		return ;
	}
	result = ft_read_text(fd);
	while (result[len])
		len++;
	ft_map(result);
	close(fd);
}

char	*ft_read_text(int fd)
{
	char		*buff;
	char		*cpy;
	char		*tmp;
	long long	i;
	int			ret;

	i = 10;
	if ((buff = malloc((i + 1) * sizeof(char))) == NULL)
		exit(EXIT_FAILURE);
	if ((cpy = malloc(1 * sizeof(char))) == NULL)
		exit(EXIT_FAILURE);
	while ((ret = read(fd, buff, i)) > 0)
	{
		buff[i] = '\0';
		cpy = ft_strcat(&cpy, buff);
		i *= 10;
		tmp = buff;
		if ((buff = malloc((i + 1) * sizeof(char))) == NULL)
			exit(EXIT_FAILURE);
		free(tmp);
	}
	if (ret == -1)
		exit(EXIT_FAILURE);
	return (cpy);
}
