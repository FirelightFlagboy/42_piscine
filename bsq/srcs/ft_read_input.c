/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:19:27 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 22:15:01 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_input.h"

void	ft_read_input(void)
{
	char		*buff;
	char		*cpy;
	char		*tmp;
	long long	i;
	int			ret;

	i = 10;
	open(0, O_RDONLY);
	if ((buff = malloc((i + 1) * sizeof(char))) == NULL)
		exit(EXIT_FAILURE);
	if ((cpy = malloc(1 * sizeof(char))) == NULL)
		exit(EXIT_FAILURE);
	while ((ret = read(0, buff, i)) > 0)
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
	ft_map(cpy);
}
