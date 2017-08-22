/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 09:37:42 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/17 10:02:54 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_advanced_sort_wordtab(char **tab, int (*f)(char*, char*));

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main(void) {
	char	*tab[] = {"test1","test3","test2","test123","test4","test527","test330","test4",NULL};
	int		(*f)(char *, char *);
	int		i;

	i = -1;
	f = ft_strcmp;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\nbecome :\n");
	ft_advanced_sort_wordtab(tab, (*f));
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	return (0);
}
