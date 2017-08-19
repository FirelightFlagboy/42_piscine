/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 12:50:56 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/14 13:57:11 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);

int		ft_len_argv(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		index_str;

	str = malloc((ft_len_argv(argc, argv) + 1) * sizeof(char));
	i = 1;
	index_str = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[index_str] = argv[i][j];
			index_str++;
			j++;
		}
		str[index_str] = '\n';
		index_str++;
		i++;
	}
	if (index_str > 0)
		str[index_str - 1] = '\0';
	return (str);
}

int		ft_len_argv(int argc, char **argv)
{
	int				i;
	int				j;
	unsigned int	len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			j++;
			len++;
		}
		len++;
		i++;
	}
	return (len);
}
