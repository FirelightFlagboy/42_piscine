/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:49:52 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/15 11:47:06 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	int			i;
	int			len;

	i = -1;
	tab = malloc((ac + 1) * sizeof(t_stock_par));
	while (i++ < ac - 1)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		if (len > 0)
		{
			tab[i].size_param = len;
			tab[i].str = av[i];
			tab[i].copy = ft_strdup(av[i]);
			tab[i].tab = ft_split_whitespaces(av[i]);
		}
	}
	tab[ac].str = NULL;
	return (tab);
}

char				*ft_strdup(char *src)
{
	char	*strdup;
	int		size_src;

	size_src = 0;
	while (src[size_src] != '\0')
		size_src++;
	strdup = malloc(size_src * sizeof(char));
	size_src = 0;
	while (src[size_src] != '\0')
	{
		strdup[size_src] = src[size_src];
		size_src++;
	}
	return (strdup);
}
