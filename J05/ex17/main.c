/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 11:39:11 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/10 11:43:50 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int main() {
	int i = 5;
	char src[] = "je m'appele";
	char dest[50] = "bonjour";
	printf("%s\n",ft_strncat(dest, src, i));
	return 0;
}
