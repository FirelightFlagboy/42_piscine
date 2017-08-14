/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:03:24 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 16:25:28 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_get_dimen_of_str(char **tab, char *sep);

void			ft_add_to_str(char *str, char **tab, char *sep, int i);

char			*ft_join(char **tab, char *sep)
{
	char			*str;
	unsigned int	size_final;

	size_final = ft_get_dimen_of_str(tab, sep);
	str = malloc((size_final + 1) * sizeof(char));
	ft_add_to_str(str, tab, sep, 0);
	return (str);
}

unsigned int	ft_get_dimen_of_str(char **tab, char *sep)
{
	int				i;
	int				k;
	unsigned int	len;
	unsigned int	size_sep;

	i = 0;
	len = 0;
	size_sep = 0;
	while (sep[size_sep] != '\0')
		size_sep++;
	while (tab[i] != 0)
	{
		k = 0;
		while (tab[i][k] != '\0')
		{
			k++;
			len += 1;
		}
		len += size_sep;
		i++;
	}
	return (len);
}

void			ft_add_to_str(char *str, char **tab, char *sep, int i)
{
	int j;
	int k;

	k = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			str[k] = tab[i][j];
			j++;
			k++;
		}
		j = 0;
		if (tab[i + 1] == 0)
			break ;
		while (sep[j] != '\0')
		{
			str[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
	str[k] = '\0';
}
