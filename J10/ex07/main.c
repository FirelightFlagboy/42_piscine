/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 09:40:43 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/17 16:46:41 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_wordtab(char **tab);

int main(void) {
	char *tab[] = {"YeorCFy3V1gl","D","H0q9AbiIl","fdUBl","ZguOdG","d",NULL};
	int i;

	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	printf("\nbecome :\n");
	ft_sort_wordtab(tab);
	i = -1;
	while (tab[++i])
		printf("%s ", tab[i]);
	return (0);
}
