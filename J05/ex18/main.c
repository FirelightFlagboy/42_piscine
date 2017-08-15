/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 11:52:24 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/12 23:04:46 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	unsigned int i;
	
	i = 40;
	char dest[40] = "Bonjour a tous";
	char src[20] = " bande de moule";
	printf("%u>%s>%s\n", ft_strlcat(dest, src, i), dest, src);
	printf("%s\n", dest);
	char dest1[40] = "Bonjour a tous";
	char src1[20] = " bande de moule";
	printf("%lu>%s>%s\n", strlcat(dest1, src1, i), dest1, src1);
	printf("%s\n", dest1);
	return 0;
}
