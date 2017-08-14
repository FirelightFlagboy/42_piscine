/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 15:52:56 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/07 11:49:54 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_eight_queens_puzzle(void);

void	ft_print_sol(int table[8]);

void	ft_place_queens(int table[8], int line, int *nb_sol);

int		ft_is_safe(int table[8], int line, int row);

int		ft_abs(int i);

int		ft_eight_queens_puzzle(void)
{
	int table[8];
	int i;
	int nb_sol;

	i = 0;
	nb_sol = 0;
	while (i < 8)
	{
		table[i] = 0;
		i++;
	}
	ft_place_queens(table, 0, &nb_sol);
	return (nb_sol);
}

void	ft_place_queens(int table[8], int line, int *nb_sol)
{
	int row;

	if (line > 7)
		*nb_sol += 1;
	else
	{
		row = 0;
		while (row < 8)
		{
			if (ft_is_safe(table, line, row))
			{
				table[line] = row;
				ft_place_queens(table, line + 1, nb_sol);
				table[line] = 0;
			}
			row++;
		}
	}
}

int		ft_is_safe(int table[8], int line, int row)
{
	int l;
	int c;
	int ok;

	l = 0;
	ok = 1;
	while (l < line)
	{
		c = table[l];
		ok = ok && (ft_abs(line - l) != ft_abs(row - c)) && row != c;
		l++;
	}
	return (ok);
}

int		ft_abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
