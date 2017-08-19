/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 09:44:12 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/16 12:15:43 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int		ft_count_word(char *str, int *max_len, char *charset);

char	*ft_strlcpy(char *src, int size, int *index, char *charset);

int		ft_is_separator(char c, char *to_find);

int		ft_strlen(char *str);

char	**ft_split(char *str, char *charset)
{
	int		nb_w;
	int		len_max;
	int		i;
	int		index;
	char	**array;

	i = -1;
	index = 0;
	len_max = 0;
	nb_w = ft_count_word(str, &len_max, charset);
	array = malloc((nb_w + 1) * sizeof(char*));
	while (++i < nb_w)
		array[i] = ft_strlcpy(str, len_max, &index, charset);
	array[i] = NULL;
	return (array);
}

int		ft_count_word(char *str, int *max_len, char *charset)
{
	int count;
	int inword;
	int temp;
	int i;

	inword = 0;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (inword == 0 && !ft_is_separator(str[i], charset) && (temp = 1) != 0)
		{
			count++;
			inword = 1;
		}
		else
		{
			inword = (ft_is_separator(str[i], charset)) ? 0 : inword;
			temp += (!ft_is_separator(str[i], charset)) ? 1 : 0;
		}
		*max_len = (*max_len < temp) ? temp : *max_len;
		i++;
	}
	return (count);
}

char	*ft_strlcpy(char *src, int size, int *index, char *charset)
{
	int		i;
	int		len_rc;
	char	*dest;

	i = 0;
	len_rc = ft_strlen(src);
	dest = malloc((size + 1) * sizeof(char));
	while (src[*index] != '\0' && ft_is_separator(src[*index], charset))
		*index = *index + 1;
	while (src[i + *index] != '\0' && !ft_is_separator(src[i + *index], charset)
	&& i < size && (i + *index) < len_rc)
	{
		dest[i] = src[i + *index];
		i++;
	}
	*index += i + 1;
	dest[i] = '\0';
	return (dest);
}

int		ft_is_separator(char c, char *to_find)
{
	int i;

	i = -1;
	if (c == '\0')
		return (0);
	while (to_find[++i])
		if (to_find[i] == c)
			return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
