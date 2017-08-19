/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 20:52:29 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/15 18:05:40 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str);

int		ft_count_word(char *str, int *max_len);

void	ft_strlcpy(char *dest, char *src, int size, int *index);

int		ft_strlen(char *str);

char	**ft_split_whitespaces(char *str)
{
	int		nb_w;
	int		len_max;
	int		i;
	int		index;
	char	**array;

	i = -1;
	index = 0;
	len_max = 0;
	nb_w = ft_count_word(str, &len_max);
	array = malloc((nb_w + 1) * sizeof(char*));
	while (++i < nb_w)
	{
		array[i] = malloc((len_max + 1) * sizeof(char));
		ft_strlcpy(array[i], str, len_max, &index);
	}
	array[i] = NULL;
	return (array);
}

int		ft_count_word(char *str, int *max_len)
{
	int count;
	int inword;
	int temp;

	inword = 0;
	count = 0;
	while (*str)
	{
		if (*str > ' ' && inword == 0)
		{
			count++;
			inword = 1;
			temp = 1;
		}
		else
		{
			inword = (*str < '!') ? 0 : inword;
			temp += (*str > ' ') ? 1 : 0;
		}
		*max_len = (*max_len < temp) ? temp : *max_len;
		str++;
	}
	return (count);
}

void	ft_strlcpy(char *dest, char *src, int size, int *index)
{
	int i;
	int len_rc;

	i = 0;
	len_rc = ft_strlen(src);
	while (src[*index] != '\0' && src[*index] < '!')
		*index = *index + 1;
	while (src[i + *index] != '\0' && src[i + *index] > ' '
	&& i < size && (i + *index) < len_rc)
	{
		dest[i] = src[i + *index];
		i++;
	}
	*index += i;
	dest[i] = '\0';
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
