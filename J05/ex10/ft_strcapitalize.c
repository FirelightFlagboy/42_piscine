/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 14:13:51 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/07 16:48:55 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str);

int			ft_as_previous(char *str, unsigned int index);

char		*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if (i > 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z' && ft_as_previous(str, i))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

int			ft_as_previous(char *str, unsigned int index)
{
	int boolean;

	if (str[index - 1] >= 'a' && str[index - 1] <= 'z')
		boolean = 0;
	else
	{
		if (str[index - 1] >= 'A' && str[index - 1] <= 'Z')
			boolean = 0;
		else
		{
			if (str[index - 1] >= '0' && str[index - 1] <= '9')
				boolean = 0;
			else
				boolean = 1;
		}
	}
	return (boolean);
}
