/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 11:39:56 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/07 11:54:07 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_eight_queens_puzzle_2(void);

void	ft_print_sol(int table[8]);

void	ft_place_queens(int table[8], int line);

int		ft_is_safe(int table[8], int line, int row);

int		ft_abs(int i);

void	ft_putchar(char c);

int		ft_eight_queens_puzzle_2(void)
{
	int table[8];
	int i;

	i = 0;
	while (i < 8)
	{
		table[i] = 0;
		i++;
	}
	ft_place_queens(table, 0);
	return (1);
}

void	ft_place_queens(int table[8], int line)
{
	int row;

	if (line > 7)
		ft_print_sol(table);
	else
	{
		row = 0;
		while (row < 8)
		{
			if (ft_is_safe(table, line, row))
			{
				table[line] = row;
				ft_place_queens(table, line + 1);
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

void	ft_print_sol(int table[8])
{
	int i;

	i = 0;
	while (i < 8)
	{
		ft_putchar(table[i] + '1');
		i++;
	}
	ft_putchar('\n');
}

int		ft_abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
