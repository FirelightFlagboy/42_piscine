/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 10:46:00 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/07 15:14:19 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int size_src;

	i = 0;
	size_src = 0;
	while (src[size_src] != '\0')
		size_src++;
	while (i < n)
	{
		if (i < size_src)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
