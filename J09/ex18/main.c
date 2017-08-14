/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:19:18 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 15:23:52 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char				*ft_join(char **tab, char *sep);

int main(void)
{
	char *tab_str[50] = {"bonjour","je","m'appelle",0};
	char sep[] = "./.";
	printf("%s\n",ft_join(tab_str, sep));
	return 0;
}
