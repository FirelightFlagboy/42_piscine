/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 07:57:46 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/17 11:09:57 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "ft_opp.h"

int		main(int argc, char *argv[])
{
	int nb1;
	int nb2;

	if (argc != 4)
		return (0);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	if (ft_strcmp(argv[2], "/") == 0 && nb2 == 0)
		ft_putstr("Stop : division by zero\n");
	else if (ft_strcmp(argv[2], "\%") == 0 && nb2 == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
		ft_call_good_func(argv + 1, nb1, nb2);
	return (0);
}

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

void	ft_call_good_func(char **tab, int nb1, int nb2)
{
	int		i;

	i = 0;
	while (g_opptab[i].type[0] != '\0')
	{
		if (ft_strcmp(tab[1], g_opptab[i].type) == 0)
		{
			ft_putnbr(g_opptab[i].f(nb1, nb2));
			return (ft_putchar('\n'));
		}
		i++;
	}
	g_opptab[i].f(nb1, nb2);
	return (ft_putchar('\n'));
}

int		ft_usage(int nb1, int nb2)
{
	int i;

	i = 0;
	nb1 = 0;
	nb2 = 0;
	ft_putstr("error : only [ ");
	while (g_opptab[i].type[0] != '\0')
	{
		ft_putstr(g_opptab[i].type);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("] are accepted.");
	return (0);
}
