/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:08:58 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/10 13:10:15 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void) {
	unsigned int i = 40;
	char dest[40] = "Bonjour a tous";
	char src[20] = " bande de moule";
	printf("%u>%s>%s\n", ft_strlcpy(dest, src, i), dest, src);
	printf("%s\n", dest);
	char dest1[40] = "Bonjour a tous";
	char src1[20] = " bande de moule";
	printf("%lu>%s>%s\n", strlcpy(dest1, src1, i), dest1, src1);
	printf("%s\n", dest1);
	return 0;
}
