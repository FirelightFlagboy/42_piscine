/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:09:07 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/16 12:08:57 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char	**tab;
	int		i;
	char 	str[] = "               \t\t\t\t\t\t\t\n\n\n\n\n\n\n bonjoru fsdhal ha fhldsljhfl lshfslm bdshf sjkdjf wdfg s]fgpos df";
	tab = ft_split_whitespaces(str);
	i = -1;
	while (tab[++i])
	{
		printf("tab[%d] >> %s\n", i, tab[i]);
	}
	return (0);
}
