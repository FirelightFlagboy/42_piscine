/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:35:35 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 22:13:09 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

char	*ft_strcat(char **dest, char *src)
{
	long long	i;
	long long	j;
	char		*tmp;
	char		*str;

	i = 0;
	str = *dest;
	while (str[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	if ((tmp = malloc((i + j + 1) * sizeof(char))) == NULL)
		exit(EXIT_FAILURE);
	i = -1;
	while (str[++i])
		tmp[i] = str[i];
	j = -1;
	while (src[++j])
		tmp[i + j] = src[j];
	tmp[i + j] = '\0';
	free(str);
	return (tmp);
}

void	ft_puterror(char *str)
{
	while (*str)
		write(2, str++, 1);
}
