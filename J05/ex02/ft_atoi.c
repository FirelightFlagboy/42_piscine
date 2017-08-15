/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 08:44:54 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/07 21:52:48 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int		ft_atoi(char *str)
{
	int values;
	int is_neg;
	int i;

	values = 0;
	is_neg = 0;
	i = 0;
	while (str[i] < 33 || str[i] > 126 || str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		is_neg = 1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		values = values * 10 + str[i] - '0';
		i++;
	}
	if (is_neg)
		return (-values);
	else
		return (values);
}
