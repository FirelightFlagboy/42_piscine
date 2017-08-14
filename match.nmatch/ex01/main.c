/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 10:55:59 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/13 21:55:26 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	nmatch(char *s1, char *s2);

int	main(int argc, char const *argv[])
{
	int		boolean;
	char	*str1;
	char	*str2;

	if (argc != 3)
	{
		printf("you must enter 2 string in parameter ;-)\n");
		return (0);
	}
	str1 = malloc(50 * sizeof(char));
	str2 = malloc(50 * sizeof(char));
	strcpy(str1, argv[1]);
	strcpy(str2, argv[2]);
	boolean = nmatch(str1, str2);
	printf("'%s' match >> '%s' ?\t%d\n", argv[1], argv[2], boolean);
	return (0);
}
