/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 21:28:42 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/13 17:47:45 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(char *str, char *base);

int		ft_check_if_right(char *ba);

int		ft_conv_str_with_base(char *str, char *base);

int		ft_conv_str(char *str, int base, int size_str);

int		ft_pow(int i, int power);

int		ft_atoi_base(char *str, char *base)
{
	int boolean;
	int i;
	int j;

	i = 0;
	if (ft_check_if_right(base) == 0)
		return (0);
	while (str[i] != '\0')
	{
		j = 0;
		boolean = 0;
		while (base[j] != '\0')
		{
			boolean = (str[i] != base[j] &&
			(str[i] != ' ' && (str[i] != '+' && str[i] != '-'))) ? boolean : 1;
			j++;
		}
		if (boolean == 0)
			return (0);
		i++;
	}
	ft_conv_str_with_base(str, base);
	return (ft_conv_str(str, j, i));
}

int		ft_check_if_right(char *ba)
{
	int boolean;
	int i;
	int j;

	i = 0;
	boolean = 1;
	while (ba[i] != '\0')
	{
		boolean = (ba[i] == '+' || ba[i] == '-') ? 0 : boolean;
		j = 0;
		while (ba[j] != '\0')
		{
			boolean = (ba[i] == ba[j] && i != j) ? 0 : boolean;
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (boolean);
}

int		ft_conv_str_with_base(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			str[i] = (str[i] == base[j]) ? (j + '0') : str[i];
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_conv_str(char *str, int base, int size_str)
{
	int i;
	int nb;
	int is_neg;

	i = 0;
	nb = 0;
	while (str[i] != '\0' && (str[i] < '!' || str[i] == '+'))
		i++;
	size_str -= i;
	is_neg = (str[i] == '-') ? 1 : 0;
	i += (is_neg) ? 1 : 0;
	size_str += (is_neg) ? -1 : 0;
	if (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
		return (0);
	while (str[i] != '\0')
	{
		nb += (str[i] - '0') * ft_pow(base, size_str - 1);
		size_str--;
		i++;
	}
	if (is_neg)
		return (-nb);
	return (nb);
}

int		ft_pow(int i, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		i *= ft_pow(i, power - 1);
	return (i);
}
