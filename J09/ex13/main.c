/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:21:26 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 11:58:27 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_compact(char **tab, int lenght);

int main(void) {
	char *tab[15] = {"bonjour", 0, "je m'apelle", "test", 0, 0, "si", "sa"};
	int len;
	int i;

	i = 0;
	printf("**********debut row***********\n");
	while (i < 8)
	{
		printf("%s\n",tab[i]);
		i++;
	}
	printf("***********end row***********\n\n");
	len = ft_compact(tab, 8);
	i = 0;
	printf("************debut************\n");
	printf("final lenght>%d\n",len );
	while (i < len)
	{
		printf("%s\n",tab[i] );
		i++;
	}
	printf("***********end**************\n");
	return (0);
}
