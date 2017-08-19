/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 15:56:42 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/17 18:42:10 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		ft_power(int nb, int power)
{
	int i;

	i = 1;
	while (power-- > 0)
		i *= nb;
	return (i);
}
int		main(void)
{
	char nbr[] = "7FFFFFFF";
	char base_from[] = "0123456789ABCDEF";
	char base_to[] = "0123456789";
	char *result;
	// printf("test %d\n", ft_power(2, 2));
	result = ft_convert_base(nbr, base_from, base_to);
	printf("%s\n", result);
	return 0;
}
// 1111111111111111111111111111111
