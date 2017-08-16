/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:23:02 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/15 18:32:38 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int argc, char *argv[])
{
	char **tab;

	argc = 0;
	tab = ft_split_whitespaces(argv[1]);
	while (*tab)
	{
		printf("%s\n", *tab);
		tab++;
	}
	return (0);
}
