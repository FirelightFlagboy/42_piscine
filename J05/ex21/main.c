/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:56:51 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/10 14:08:34 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int main(void) {
	char str[] = "Segmentation fault";
	char base[] = "gtaio luSnemf";
	printf("str>'%s',base>'%s'\n", str, base);
	printf("%d\n", ft_atoi_base(str, base));
	return 0;
}
