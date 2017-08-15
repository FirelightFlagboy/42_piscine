/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 17:34:25 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/06 17:54:47 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	unsigned int	i;
	int				boolean;

	i = 0;
	boolean = 1;
	if (str[i] == '\0')
		return (boolean);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[i] < 'A' || str[i] > 'Z')
				boolean = 0;
		}
		i++;
	}
	return (boolean);
}
