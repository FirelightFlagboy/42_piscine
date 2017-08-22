/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 14:17:32 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/17 10:05:45 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char*, char*))
{
	int		i;
	int		len;
	char	*temp;

	len = 0;
	i = -1;
	while (tab[len])
		len++;
	while (++i < len - 1 && tab[i])
	{
		if ((*cmp)(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
	}
}
