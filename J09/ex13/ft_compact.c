/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:58:10 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 16:18:26 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **str, int lenght)
{
	int i;
	int k;
	int temp;

	i = 0;
	temp = lenght;
	while (i < lenght)
	{
		k = 0;
		if (str[i] == 0)
			temp--;
		while (k < lenght - 1)
		{
			if (str[k] == 0)
			{
				str[k] = str[k + 1];
				str[k + 1] = 0;
			}
			k++;
		}
		i++;
	}
	return (temp);
}
