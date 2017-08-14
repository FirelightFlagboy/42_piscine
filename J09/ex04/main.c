/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 20:56:37 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/10 21:30:49 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_root42(char *str);

int main(void)
{
	char str[] = "a";
	printf("'%s',",str );
	printf("become>'%s'\n", ft_root42(str));
	return 0;
}
