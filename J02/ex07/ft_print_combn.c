/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 21:34:15 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/06 22:19:48 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_create_tab(int array[], int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		array[i] = i;
		i++;
	}
}

int		ft_get_index(int *tab, int size)
{
	int i;
	int max_value;

	i = 0;
	max_value = 10 - size;
	while (i < size)
	{
		if (tab[i] == max_value)
			return (i - 1);
		if (i == (size - 1) && tab[i] < max_value)
			return (i);
		i++;
		max_value++;
	}
	return (-1);
}

void	ft_increment(int tab[], int index, int size)
{
	int i;

	i = index + 1;
	tab[index]++;
	while (i < size)
	{
		tab[i] = tab[i - 1] + 1;
		i++;
	}
}

void	ft_print_array(int array[], int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(array[i] + '0');
		i++;
	}
}

void	ft_print_combn(int n)
{
	int tab[n];
	int index;

	ft_create_tab(tab, n);
	while (ft_get_index(tab, n) != -1)
	{
		index = ft_get_index(tab, n);
		ft_print_array(tab, n);
		ft_increment(tab, index, n);
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_print_array(tab, n);
}
