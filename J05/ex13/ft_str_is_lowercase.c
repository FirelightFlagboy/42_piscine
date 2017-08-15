/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 17:06:49 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/07 17:08:41 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int boolean;

	boolean = 1;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			boolean = 0;
		str++;
	}
	return (boolean);
}
