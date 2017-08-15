/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 17:09:49 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/07 17:11:12 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int boolean;

	boolean = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			boolean = 0;
		str++;
	}
	return (boolean);
}
