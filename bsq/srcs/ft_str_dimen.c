/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_dimen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:16:29 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 14:48:13 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_dimen.h"

int		ft_get_nb_nl(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str == '\n')
			count++;
		str++;
	}
	return (count);
}

int		ft_get_line(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

int		ft_strlenline(char *str)
{
	int len_line;
	int temp;
	int len;
	int i;

	len_line = ft_get_line(str);
	i = len_line;
	len = 0;
	while (str[len])
		len++;
	str += (str[i]) ? 1 : 0;
	while (str[i])
	{
		temp = 0;
		while (str[i] != '\n' && str[i] != '\0')
		{
			i++;
			temp++;
		}
		if (temp != len_line && i < len - 3)
			return (-1);
		str += (str[i]) ? 1 : 0;
	}
	return (len_line);
}
