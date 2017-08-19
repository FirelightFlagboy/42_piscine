/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 11:34:20 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/16 15:37:56 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*strdup;
	int		size_src;

	size_src = 0;
	while (src[size_src] != '\0')
		size_src++;
	strdup = malloc((size_src + 1) * sizeof(char));
	size_src = 0;
	while (src[size_src] != '\0')
	{
		strdup[size_src] = src[size_src];
		size_src++;
	}
	strdup[size_src] = '\0';
	return (strdup);
}
