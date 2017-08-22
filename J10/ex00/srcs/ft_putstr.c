/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 12:07:01 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/18 15:09:02 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void		ft_putstr(char *str);

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
