/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 08:27:14 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/17 09:01:07 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int (*f)(char*));

int		ft_find_separator(char *str)
{
	int i;
	int boolean;

	printf("FIND SEP\n");
	i = -1;
	boolean = 0;
	while (str[++i])
	{
		boolean = (str[i] < '!') ? 1 : boolean;
		// printf("str[%d] >> %c >> boolean = %d\n", i, str[i], boolean);
	}
	printf("END FIND\n");
	return (boolean);
}

int		main(void) {
	char str[] = "bonjourJeSuisUnePhraseSansSeparateur";
	char str1[] = "dsakjfslndynksdaskhmcdnfcghidukncsa";
	char tstr[] = "bonjour je suis une phrase avec separateur";
	char tstr1[] = "a sdflgaofsnjglmksj, alfm ad flashfg, ., gla nlds";
	int (*f)(char*);
	char *tab[3];

	tab[0] = str;
	tab[1] = str1;
	tab[2] = NULL;
	f = ft_find_separator;
	printf("FIRST\n");
	printf("%d\n%s\n%s\n", ft_count_if(tab, (*f)),tab[0], tab[1]);
	tab[0] = tstr;
	tab[1] = tstr1;
	printf("%d\n%s\n%s\n", ft_count_if(tab, (*f)),tab[0], tab[1]);
	return 0;
}
